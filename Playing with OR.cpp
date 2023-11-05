#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    int count = 0;
	    cin>>x>>y;
	    int arr[x];
	    for(int i=0;i<x;i++){
	        cin>>arr [i];
	    }
	    
	    for(int i=0;i<x-y;i++){
           for(int j=i;j<=y;j++){
               if (arr[j]%2 == 1){
                   count++;
                   break;
               }
           }
	    }
	    cout<<count<<endl;
	}
	    
	return 0;
}
