#include <bits/stdc++.h>
using namespace std;
#define IOS                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long
const int N = 100001;
const int P = 1e9 + 7;
const ll inf = LLONG_MAX;
#define pb push_back
#define all(x) x.begin(), x.end()
#define ff first
#define ss second
#define cnu continue
bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;

    for (int i = 0; i < n1; i++)
    {
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;
    }
    return false;
}

// Function for finding difference of larger numbers
void findDiff(string &str1, string &str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    // if (isSmaller(str1, str2))
    //     swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n1 - n2;

    // Initially take carry zero
    int carry = 0;

    // Traverse from end of both strings
    for (int i = n2 - 1; i >= 0; i--)
    {
        // Do school mathematics, compute difference of
        // current digits and carry
        int sub = ((str1[i + diff] - '0') - (str2[i] - '0') - carry);
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str+= sub + '0';
    }

    // subtract remaining digits of str1[]
    for (int i = n1 - n2 - 1; i >= 0; i--)
    {
        if (str1[i] == '0' && carry)
        {
            str+='9';
            continue;
        }
        int sub = ((str1[i] - '0') - carry);
        if (i > 0 || sub > 0) // remove preceding 0's
            str +=sub + '0';
        carry = 0;
    }

    // reverse resultant string
    reverse(str.begin(), str.end());
    cout<<str;
    // return str;
}

int main()
{
    IOS
    int t;
    cin >> t;
    while (t--)
    {

        ll d;
        cin >> d;
        string n;
        cin >> n;
        string s = n;
        // cout<<s<<endl;
        if (s[0] == '9')
        {
            string ans = "";
            ans = ans + '1';
            for (ll i = 0; i < d - 1; i++)
                ans = ans + '2';
            ans = ans + '1';
            findDiff(ans, s);
            ll flag = 0;
            // for (ll i = 0; i < sol.size(); i++)
            // {
            //     if (s[i] == '0' && flag == 0)
            //         continue;
            //     else
            //     {
            //         cout << sol[i];
            //         flag = 1;
            //     }
            // }
            // cout<<sol;
            cout << "\n";
        }
        else
        {
            string ans = "";
            ans = ans + '1';
            for (ll i = 0; i < d - 1; i++)
                ans = ans + '0';
            ans = ans + '1';
            findDiff(ans, s);
            ll flag = 0;
            // for (ll i = 0; i < sol.size(); i++)
            // {
            //     if (s[i] == '0' && flag == 0)
            //         continue;
            //     else
            //     {
            //         cout << sol[i];
            //         flag = 1;
            //     }
            // }
            // cout<<sol;
            cout << "\n";
        }
    }

    return 0;
}