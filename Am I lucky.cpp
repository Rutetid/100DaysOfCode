#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        // Your code here 
        int all,boys,g,girls;
        cin>>all>>boys>>g;
        girls = all - boys;

        int remb,remc;
        remb = boys%g;
        remc = girls%g;

        cout<< abs(remb - remc)<<endl;

    }
    return 0;
}
