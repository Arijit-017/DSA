#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    for(int i = 0 ;i < size ; i++ ){
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[],int n){
    int i = 0 , j = n-1;
    while(i<j){
        if(arr[i]==0)
            i++;
        else if(arr[j]==1)
            j--;
        else{
            swap(arr[i],arr[j]);
            i++;
            j--;
        }

    }
}

int main(){
    int arr[8]={0,1,1,0,1,0,0,1};
    sort(arr,8);
    printArr(arr,8);
    return 0;
}