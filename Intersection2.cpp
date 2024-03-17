//Optimised solution (time complexcity < 1sec)
#include<iostream>
using namespace std;

void intersection(int arr1[],int m,int arr2[],int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(arr1[i]==arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}

int main(){
    int arr1[8]={1,2,2,4,5,8,9,9};
    int arr2[5]={1,5,6,8,9};
    intersection(arr1,8,arr2,5);

    return 0;
}