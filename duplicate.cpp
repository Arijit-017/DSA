#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    for(int i = 0 ;i < size ; i++ ){
        cout<<arr[i]<<" ";
    }
}

void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void findDuplicate(int arr[],int n){
    sort(arr,8);
    int i=0;
    while(i<n){
        if(arr[i]==arr[i+1]){
            cout<<arr[i]<<' ';
        }
        i++;
    }
}

// void findDuplicate(int arr[],int n){
//     int ans[100],indx=0;

//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 ans[indx++]=arr[i];
//             }
//         }
//     }
//     sort(ans,indx);
//     printArr(ans,indx);
// }

int main(){
    int arr[8]={4,3,2,7,8,2,3,1};
    findDuplicate(arr,8);

    return 0;
}