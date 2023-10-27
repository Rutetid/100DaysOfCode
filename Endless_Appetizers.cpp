#include <iostream>
using namespace std;

int main() {
    int T,X,Y,R,plates,sticks;
    cin>>T;
    while(T--)
    {
        cin>>X>>Y>>R;
        if(R>0)
	{
            sticks = (R/30)+X;
        }
        else sticks = X;
        
        if(sticks%Y ==0){
            plates = (sticks/Y);
        }
        else if(sticks%Y !=0)
        plates =(sticks/Y)+1;
        cout<<plates<<endl;
    }
	return 0;
}
