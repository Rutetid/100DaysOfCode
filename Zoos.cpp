include <iostream>
using namespace std; 
int main()
{
  string word;
  int zcount = 0;
  int ycount = 0;
  cin >>word;
  int size = word.length();

  for(int i=0;i<size;i++){
    if(word[i] == 'z')
        zcount++;
    else
        ycount++;
  }

    if(ycount == (zcount*2)){
        cout << "Yes";
    }
    else
        cout << "No";

  return 0;
}
