#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,p,q,r,s;
	cin>>t;
	while(t--){
	    cin>>p>>q>>r>>s;
	    if(p>(q+r+s))
	    cout<<"yes"<<endl;
	    else if(q>(p+r+s))
	    cout<<"yes"<<endl;
	    else if(r>(p+q+s))
	    cout<<"yes"<<endl;
	    else if(s>(p+q+r))
	    cout<<"yes"<<endl;
	    
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
