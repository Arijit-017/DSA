#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    for(int i = 0 ;i < size ; i++ ){
        cout<<arr[i]<<" ";
    }
}

///////////////////////////Anuska's logic////////////////////////////////

void sortarr(int arr[],int n){
    int low = 0;
    int high = n-1;
    int mid = 0;
    while(mid<=high){
        switch(arr[mid]){
            case 0:{
                swap(arr[low++],arr[mid]);
                break;
            }
            case 1:{
                mid++;
                break;
            }
            case 2:{
                swap(arr[high--],arr[mid]);
            }
        }
    }
}
//////////////////////////Bubble Sort....//////////////////////////////////
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
/////////////////////////////-------Main-------////////////////////////////////
int main(){
    int arr[10]={1,1,2,0,2,1,0,0,0,2};
    sortarr(arr,10);

    printArr(arr,10);
    
    return 0;
}