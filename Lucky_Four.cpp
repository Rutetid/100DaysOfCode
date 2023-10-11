#include <iostream>
#include <string>
using namespace std;
int main() {
	int T;
	string number;
    cin>>T;
    while(T--){
        int count= 0;
        cin>> number;
        int size;
        size = number.size();
        for(int i=0;i<size;i++){
            if(number[i]=='4')
            count++;
            
        }
        cout<<count<<endl; 
        
    }
	return 0;
}
