/******************************************************************************
Bubble  sort
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    //bubble sort
    for(int i=n-1;i>=0;i--){
        int didSwap=0;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                int temp;
                temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]= temp;
                didSwap=1;
            }
        }
        if(didSwap==0){
            break;
        }
        
    }
    
    cout << "After Using bubble sort: " << "\n";
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}




int main()
{
    int arr[]={13,46,24,52,20,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Unordered array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\n";
    bubble_sort(arr,n);
    
    return 0;
}