#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a;
	cin>>t;
	while(t--){
	    cin>>a;
	    if(a%2==0 || a==1) cout<<"yes"<<endl;
	    else cout<<"no"<<endl;
	}
	
	return 0;
}
