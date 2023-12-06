#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        // Your code here
        int x,y,z;
        cin>>x>>y>>z;
        if(z>(x*y/2)){
            cout<<"yes"<<endl;

        }

        else cout<<"no"<<endl;
    }
    return 0;
}