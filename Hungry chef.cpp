#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,n,r;
	cin>>t;
	while(t--){
	    cin>>x>>y>>n>>r;
	    if(y*n <= r) 
	    cout<<"0"<<" "<<y<<endl;
	    
	    else if (n*x>r && n*y>r){
	        cout<<"-1"<<endl;
	    }
	    
	    else {
	    for(int i =1;i<=n;i++)
	    {
	        if(((i*x)+(n-i)*y)<=r){
	            cout<<i<<" "<<n-i<<endl;
	            break;
	        }
	        
	    }
	    }
	}
	return 0;
}
