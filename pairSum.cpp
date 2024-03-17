#include<iostream>
using namespace std;

void pairSum(int arr[],int n,int s){
    for(int i=0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] + arr[j]==s ){
                cout<<arr[i]<<" "<<arr[j]<<endl;
                break;
            }
        }

    }
}

int main(){
    int arr[10]={1,2,3,4,5,5,6,7,8,9};
    int n;
    cin>>n;
    pairSum(arr,10,n);
    return 0;
}