#include<iostream>
using namespace std;

void merge(int nums1[], int m,int  nums2[], int n) {
    int j = 0;
    for(int i = 0 ; i < m ; i++ ){
        if(nums1[i]>nums2[j]){
            swap(nums1[i],nums2[j]);
            j++;
        }
    }
        
    for(int k = 0 ; k <  n ; k++ ){
        nums1[ m + k ]=nums2[ k ];
    }
}

int main(){
    int nums1[] = {1,2,3,0,0,0}, m = 3, nums2[] = {2,5,6}, n = 3;
    merge(nums1,m,nums2,n);
    for (int i = 0; i < m+n; i++)
    {
        cout<<nums1[i]<<" ";
    }
    cout<<endl;

    return 0;
}