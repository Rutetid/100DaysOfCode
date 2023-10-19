#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int A =0;
   	    int B=0;
	        
	    pair<vector<int>,vector<int>> data;
	    for(int i =0;i<3;i++){
	        int element;
	        cin>>element;
	        data.first.push_back(element);
	    }
	    for(int i =0;i<3;i++){
	        int elements;
	        cin>>elements;
	        data.second.push_back(elements);
	    }
	    
	    for(int i=0;i<3;i++){
	        if(data.first[i]>data.second[i]){
	            A++;
	        }
	        else B++;
	    }
	    if(A>B) cout<<"a"<<endl;
	    else cout<<"b"<<endl;
	    
	}
	return 0;
}
