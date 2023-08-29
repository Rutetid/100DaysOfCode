#include<iostream>
using namespace std;

int main(){
  int l,r,k;
  int count = 0;
  cin>>l>>r>>k;
  int eq = (r-l);
  int ans = (eq/k) + 1;
  if (l == r)
  cout<<"0";
  else cout<<ans;
  
  return 0;
}
