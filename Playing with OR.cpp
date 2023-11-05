#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    int count = 0;
	    cin>>x>>y;
	    vector<int> vec;
	    for(int i=0;i<x;i++){
	        int temp;
	        cin>>temp;
	        vec.push_back(temp);
	    }
	    
	    for(int i=0;i<=x-y;i++){
           for(int j=i;j<i+y;j++){
               if (vec[j]%2 == 1){
                   count++;
                   break;
               }
           }
	    }
	    cout<<count<<endl;
	
	}
	    
	return 0;
}
