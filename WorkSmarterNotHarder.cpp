#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,l,a,b;
	cin>>t;
	while(t--){
	    cin>>l>>a>>b;
	    int t1,t2;
	    if(l%a==0){
	        t1 = l/a;
	    }
	    
	    else t1 = (l/a)+1;
	    
	    if(l%b==0){
	        t2 = l/b;
	    }
	    
	    else t2 =(l/b)+1;
	    
	    if(t1>(t2+1)){
	        cout<<t1-(t2+1)<<endl;
	    }
	    else if (t2 == t1){
	    cout<<"-1"<<endl;
	    }
	    else cout<<0<<endl;
	}
	return 0;
}
