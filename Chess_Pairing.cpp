#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
    // Your code here
    int n,x;
    cin>>n>>x;
    if(x<=n){
        cout<<"0"<<endl;

    }

    else cout<<2*(x-n)<<endl;      
    }
    return 0;
}