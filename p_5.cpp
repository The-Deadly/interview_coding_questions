/**
    * The cost of stock on each day is given in an array A[] of size N.
    * Find all the days on which you buy and sell the stock so that in between those days your profit is maximum.
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    long long t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long a[n];
        for(long long i = 0;i<n;i++){
            cin>>a[i];
        }
        long long i,start,prev = -1,count = 0;
        for(i = 0;i<n-1;i++){
            if(a[i] < a[i+1]){
                start = i;
                break;
            }
        }
        for(i;i<n-1;i++){
            if(a[i] > a[i+1] and prev != start){
                prev = start;
                count += 1;
                cout<<"("<<start<<" "<<i<<") ";
                for(long long j = i+1;j<n-1;j++){
                    if(a[j] < a[j+1]){
                        i = j-1;
                        start = j;
                        break;
                    }
                }
            }
            else if(a[i] < a[i+1]){
                if(i == n-2){
                    count += 1;
                    cout<<"("<<start<<" "<<i+1<<") ";
                }
            }
        }
        if(count == 0){
            cout<<"No Profit";
        }
        cout<<endl;
    }
}