/******************************************************************************

reverse character Triangle pattern 

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

void pattern17(int n)
{
    
      // Outer loop for the number of rows.
    for(int i=0;i<n;i++){
          
          
        for(char j = 0; j<n-i-1;j++){
            cout<<" ";
              
        }
        
        char ch='A';
        int breakpoint = (2*i+1)/2;
        for(int j=1; j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint){
                ch++;
            }
            else{
                ch--;
            }
        }
        for(char j = 0; j<n-i-1;j++){
            cout<<" ";
              
        }
        cout<<endl;
    
    }

}


int main()
{
    int n;
    cin>>n;
    
    pattern17(n);
    
    return 0;
}