#include<iostream>
#include<string>
using namespace std;
int main(){
  string word;
  cin>>word;
  string reversed ="";
  for(int i = word.size() - 1;i>=0;i--)
    reversed += word[i];

  if(word == reversed)
    cout<<"YES";
  else cout<<"NO";
  return 0;
}
