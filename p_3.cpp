/**
	* Given an array arr[] of N non-negative integers representing height of blocks at index i as
	* Ai where the width of each block is 1.
	* Compute how much water can be trapped in between blocks after raining.
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
    	long long a[n] , water = 0;
    	for(long long i = 0;i<n;i++){
    		cin>>a[i];
    	}
    	long long l_max[n] , r_max[n];
    	l_max[0] = a[0];
    	r_max[n-1] = a[n-1];
    	for(long long i = 1;i<n;i++){
    		l_max[i] = max(l_max[i-1] , a[i]);
    	}
    	for(long long i = n-2;i>=0;i--){
    		r_max[i] = max(r_max[i+1] , a[i]);
    	}
    	for(long long i = 0;i<n;i++){
    		water += min(l_max[i] , r_max[i]) - a[i];
    	}
    	cout<<water<<endl;
    }
}