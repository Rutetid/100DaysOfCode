#include <iostream>
using namespace std;

int main() {
	int t,n,a,b;
	float proba,probb,ans;
	cin>>t;
	while(t--){
	    cin>>n>>a>>b;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int counta =0 ;
	    int countb = 0;
	    for(int i=0;i<n;i++){
	         if (a == arr[i])
	         counta++;
	    }
	    for(int i=0;i<n;i++){
	         if (b == arr[i])
	         countb++;
	    }
	    proba = static_cast<float>(counta) / n;
            probb = static_cast<float>(countb) / n;
	    ans = (proba * probb);
	    cout<<ans<<endl;
	}
	return 0;
}
