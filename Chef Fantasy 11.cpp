#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--){
        int z;
        cin>>z;
        if(z==2) cout<<"2"<<endl;
        else
        cout<<z*(z-1)<<endl;
    }
	return 0;
}

