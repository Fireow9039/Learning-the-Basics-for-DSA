/******************************************************************************

Next Permutation problem Brute force
*******************************************************************************/

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,3,2};
    next_permutation(arr, arr+3);
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];
    return 0;
}