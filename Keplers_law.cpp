#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int t;
    cin>>t; 
    while(t--){
        float a,b,c,d,A,B,C,D;
        float k,p;
        cin>>a>>b>>c>>d;
        A = a*a;
        B = b*b;
        C = c*c*c;
        D = d*d*d;
        k = A*D;
        p = B*C;
        if(k==p) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
        }
	return 0;
}
