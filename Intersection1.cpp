#include<iostream>
using namespace std;

void intersection(int arr1[],int m,int arr2[],int n){
    for(int i = 0; i< m; i++){
        int element = arr1[i];
        for(int j = 0; j<n;j++){
            if(element==arr2[j]){
                cout<<element<<" ";
                arr2[j]=-3333;
                break;
            }
        }
    }
}

int main(){
    int arr1[8]={1,2,2,4,5,8,9,9};
    int arr2[5]={1,5,6,8,9};
    intersection(arr1,8,arr2,5);

    return 0;
}