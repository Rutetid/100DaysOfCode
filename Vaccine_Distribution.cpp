#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        // Your code here
        int n,d;
        cin>>n>>d;

        vector<int> people;

        for(int i=0;i<n;i++){
            int age;
            cin>>age;
            people.push_back(age);
        }
        int risky =0;
        int normal =0;
        for(int i=0;i<n;i++){
            if(people[i]<=9 || people[i]>=80){
                risky++;
            }
            else{
                normal++;
            }
        }

        int ans1= 0;
        int ans2 = 0;

        if(risky%d == 0){
            ans1 = risky/d;
        }
        else if(risky%d !=0){
            ans1 = (risky/d)+1;

        }

        if(normal%d == 0){
            ans2 = normal/d;
        }
        else if(normal%d !=0){
            ans2 = (normal/d)+1;

        }

        cout<<ans1+ans2<<endl;
    }
    return 0;
}