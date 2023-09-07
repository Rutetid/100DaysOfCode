#include <iostream>
using namespace std;

int main() 
{
	int t,n;
	cin>>t;
	
	while(t--)
	{
	    cin>>n;
	    int A[n];
	    
	    for(int i = 0;i<n;i++)
	    {
	        cin>>A[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
            if(i%2 == 0)
            {
                if(A[i]>A[i-1] && i!=0)
                {
                    swap(A[i],A[i-1]);
                }
                    
            }
            else 
            {
               if(A[i]<A[i-1])
               {
                   swap(A[i],A[i-1]);
               }
            }
            
	    }
	    
	    for (int i=0;i<n;i++)
	    {
	        cout<<A[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
