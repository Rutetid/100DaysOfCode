#include <bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> nos) {
    int xorr = 0;
    for (int num : nos) {
        xorr ^= num;
    }

    int minXor = xorr;
    for (int i = 0; i < n; ++i) {
        int currXor = xorr ^ nos[i];
        if (currXor < minXor) {
            minXor = currXor;
        }
    }

    return minXor;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> nos;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            nos.push_back(temp);
        }
        int minXor = solution(n, nos);
        cout << minXor << endl;

        // Your code here
    }
    return 0;
}