#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,k,n;
	cin>>t;
	while(t--){
	    int number = 0;
	    vector<int> g;
	    cin>>n>>k;
	    int arr[n];
	    for(int i = 0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i =0;i<n;i++){
	        if (arr[i]<=k){
	            number = 1;
	            g.push_back(number);
	            k = k- arr[i];
	        }
	        else g.push_back(0);
	    }
	    for(int i = 0;i<n;i++){
	        cout<<g[i];
	    }
	    cout<<endl;
	}
	return 0;
}
