#include<iostream>
using namespace std;

void tripletSum(int arr[],int n,int ele){
    for (int i = 0; i < n; i++){
        for(int j = i+1; j < n ; j++){
            int key = arr[i]+arr[j];
            if(key>=ele){
                break;
            }
            for(int k = j+1; k< n;k++){
                if(arr[k]+key==ele){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    break;
                }
            }
        }
    }
    
}

int main(){
    int arr[10]={1,2,3,4,5,5,6,6,7,8};
    int ele;
    cin>>ele;
    tripletSum(arr,10,ele);
    return 0;
}