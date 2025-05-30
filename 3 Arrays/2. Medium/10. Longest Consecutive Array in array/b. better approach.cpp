/******************************************************************************
Longest Consecutive array in an array
Better approach
*******************************************************************************/
#include<bits/stdc++.h>
using namespace std;

int LongestSuccessiveElements(vector<int> &a){
    int n=a.size();
    if(n==0) return 0;
    
    //sort array
    sort(a.begin(), a.end());
    
    int lastSmaller = INT_MIN;
    int cnt = 0;
    int longest = 1;
    
    //find longest sequence;
    
    for(int i=0;i<n;i++){
        if(a[i]-1 == lastSmaller){
            //a[i] is the next element of the current sequence
            cnt+=1;
            lastSmaller=a[i];
        }
        
        else if(a[i]!=lastSmaller){
            cnt=1;
            lastSmaller=a[i];
        }
        longest = max(longest,cnt);
    }
    return longest;
    
}

int main()
{
    vector<int> a = {100, 200, 1,2,3,4};
    int ans = LongestSuccessiveElements(a);
    
    cout<<"The longest consecutive sequence is "<<ans<<"\n";
    return 0;
}