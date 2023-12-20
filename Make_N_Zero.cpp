#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        // Your code here
        int b;
        cin>>b;

        if( b%3 == 0 || b%4 == 0 || ((b-3)%3 == 0 ||(b-3)%4 == 0 || (b-4)%3 == 0 ||(b-4)%4 == 0) && (b!=1 && b!=2)){
            cout<<"YES"<<endl;
        }

        else cout<<"NO"<<endl;
    }
    return 0;
}