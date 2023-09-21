#include <iostream>
using namespace std;

int main() 
{
	int c,n,r;
	cin>>c;
	while (c--){
	    cin>>n>>r;
	    if (n%2 ==0)
	    cout<<"yes"<<endl;
	    else if(n%2 == 0 && r%2!=0)
	    cout<<"yes"<<endl;
	    else if(n%2 != 0 && r%2!=0)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}
