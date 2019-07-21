/**
  * Given a number (greater than 2),
  * print two prime numbers whose sum will be equal to given number,
  * else print -1 if no such number exists.
**/

#include<bits/stc++.h>
using namespace std;

void primes(long long n) 
{ 
    long long sum = n;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    prime[1] = prime[0] = false;
    for (long long p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
    for (long long p=2; p<=n; p++){
       if (prime[p]){
           sum -= p;
           if(prime[sum]){
               cout<<p<<" "<<sum<<endl;
               break;
           }
           else{
               sum += p;
           }
       }
    }
    if(sum == n){
        cout<<-1<<endl;
    }
} 

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        primes(n);
    }
}