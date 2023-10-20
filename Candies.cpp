#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    bool possible = true;
	    int arr[2*n];
	    for(int i = 0 ; i <2*n;i++){
	        cin>>arr[i];
	    }
	    
	    unordered_map<int,int> freq;
	    for(int i = 0; i<2*n;i++){
	        freq[arr[i]]++;
	    }
	    
	    for(const auto& pair : freq)
	    {
	        if (pair.second > 2)
	        {
	        possible = false;
	        break;
	        }
	 	}
	 	if(possible ==false)
	 	cout<<"no"<<endl;
	 	else cout<<"yes"<<endl;
	}
	return 0;
}
