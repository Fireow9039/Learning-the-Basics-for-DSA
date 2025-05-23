/******************************************************************************
sort an array of 0s 1s and 2s
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr, int n ){
    int low=0,mid=0, high=n-1;
    
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    
}



int main(){
    vector<int> arr= {2,0,2,1,1,0};
    int n= arr.size();
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    
    sortArray(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }

}