/**
	* Given a pattern containing only I's and D's. I for increasing and D for decreasing.
	* Devise an algorithm to print the minimum number following that pattern.
	* Digits from 1-9 and digits can't repeat.
**/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    long long t;
    cin>>t;
    string str;
    while(t--){
    	cin>>str;
    	long long num = 1;
    	stack<long long> s;
    	for(long long i = 0;i<=str.size();i++){
    		s.push(num);
    		num += 1;
    		if(str[i] == 'I' or i == str.size()){
    			while(!s.empty()){
    				cout<<s.top();
    				s.pop();
    			}
    		}
    	}
    	cout<<endl;
    }
}