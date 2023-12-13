#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        // Your code here
        int ans;
        int x,y;
        cin>>x>>y;
        if(x%(y+1) == 0){
            ans = x/(y+1);
        }

        else {
        
            ans = x - (x/(y+1))*y;
        }
        cout<<ans<<endl;
    }
    return 0;
}