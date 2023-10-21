#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    
	    unordered_map<int,int> umap;
	    for(int i=0;i<n;i++){
	        umap[arr[i]]++;
	    }
	    
	    for(const auto& pair : umap){
	        if(pair.second%2 !=0){
	            cout<<pair.first<<endl;
	        }
	    }
	    
	    
	}
	return 0;
}
