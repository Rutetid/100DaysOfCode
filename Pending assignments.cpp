#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	while(t--){
	    cin>>x>>y>>z;
	    if((z*24*60)>=(x*y)){
	        cout<<"yes"<<endl;
	    }
	    else cout<<"no"<<endl;
	}
	return 0;
}
