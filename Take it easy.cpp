#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int sum = 0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        
        int each = sum/n;
        int diff;
        bool possible = true;
        
        for(int i = 0;i<n;i++){
            diff= abs(each - arr[i]);
            if (diff%2 !=0 || sum%n != 0){
                possible = false;
                break;
            }
        }
        
        if(possible)
        cout<<"yes"<<endl;
        
        else
        cout<<"no"<<endl;
        
        
        
        
        
    }
	return 0;
}
