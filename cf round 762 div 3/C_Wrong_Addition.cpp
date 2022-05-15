#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

void reverseStr(string& str)
{
    int n = str.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

string removeLeadingZeros(string str)
{
    // Regex to remove leading
    // zeros from a string
    const regex pattern("^0+(?!$)");
 
    // Replaces the matched
    // value with given string
    str = regex_replace(str, pattern, "");
    return str;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,s;
        cin>>a>>s;
        reverseStr(a);reverseStr(s);
        //cout<<a<<" "<<s<<" ";
        string ans="";
        int ptr=0, num1, num2, flag=0;
        for(int i=0;i<a.size();i++){
            if(a[i]>s[ptr] && ptr<s.size()-1){
                num1 = a[i] -'0';
                num2 = 10*(s[ptr+1]-'0')+s[ptr]-'0';
                if(num2-num1<=9 && num2>=num1){
                    ans.append(to_string(num2-num1));
                    ptr+=2;
                }
                else{
                    cout<<"-1\n";
                    flag=-1;
                    break;
                }
                // cout<<num1<<"a"<<num2<<" ";
                // cout<<ans<<" ";
            }
            else if(a[i]<=s[ptr] && ptr<s.size()){
                num1=a[i]-'0';
                num2 = s[ptr]-'0';
                ans.append(to_string(num2-num1));
                ptr++;
                // cout<<num1<<"b"<<num2<<" ";
                // cout<<ans<<" ";
            }
            else{
                cout<<"-1\n";
                flag=-1;
                break;
            }
        }
        if(ptr<s.size()){
            while(ptr<s.size()){
                ans.append(to_string(s[ptr]-'0'));
                ptr++;
            }
        }
        reverseStr(ans);
        ans = removeLeadingZeros(ans);
        if(flag==0){
            cout<<ans<<"\n";
        }
    }
}