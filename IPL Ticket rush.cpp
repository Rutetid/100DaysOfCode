#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	while(t--){
	    cin>>n>>m;
	    if(m<n)
	    cout<<n-m<<endl;
	    else cout<<"0"<<endl;
	}
	return 0;
}
