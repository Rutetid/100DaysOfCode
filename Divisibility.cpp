#include<iostream>
using namespace std;

int main(){
  int size;
  cin>>size;
  int arr[size];
  int lastdigit;

  for(int i=0;i<size;i++) {
    cin>>arr[i];
  }
  lastdigit = arr[size -1];
  if(lastdigit % 10 ==0  && size >1)
    cout<<"Yes";
  else
    cout<<"No";

  return 0;
}
