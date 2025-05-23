/******************************************************************************
Insertion Sort
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n){
    //Insertion Sort
    for(int i=0;i<n;i++){
        int j=i;
        
        while(j>0 && arr[j-1]>arr[j]){
            int temp;
            temp = arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            
            j--;
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
    insertion_sort(arr,n);
    
    return 0;
}