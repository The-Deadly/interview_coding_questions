/**
	* Given an unsorted array of size N of positive integers.
	* One number 'A' from set {1, 2, …N} is missing and one number 'B' occurs twice in array.
	* Find these two numbers.
	* Note: If you find multiple answers then print the Smallest number found.
	* Also, expected solution is O(n) time and constant extra space.
**/

#include<bits/stc++.h>
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
        for(long long i = 0;i<n;i++){
            if(a[abs(a[i]) - 1] > 0){
               a[abs(a[i]) - 1] = -a[abs(a[i]) - 1]; 
            }
            else{
                cout<<(abs(a[i]))<<" ";
            }
        }
        for(long long i = 0;i<n;i++){
            if(a[i] > 0){
                cout<<i+1<<endl;
                break;
            }
        }
    }
}
