#include <iostream>
using namespace std;

int main()
{
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        
        if((x+y)>6) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
	return 0;
}
