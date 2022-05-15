#include<bits/stdc++.h>
using namespace std;
typedef long long int lol;

bool prime[7920];
void SieveOfEratosthenes(int n)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    
}
 
int main(){
    SieveOfEratosthenes(7919);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=2;i<=7919 && n>0;i++){
            if(prime[i]){
                cout<<i<<" ";
                n--;
            }
        }
        cout<<"\n";
    }
}