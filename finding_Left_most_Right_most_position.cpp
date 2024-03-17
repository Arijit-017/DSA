
#include<iostream>
using namespace std;

int leftPosition(int arr[],int n,int ele){
    for(int i=0;i<n;i++){
        if(arr[i]==ele)
            return i;
    }
    return -1;
}

int rightPosition(int arr[],int n,int ele){
    for(int i=n;i>0;i--){
        if(arr[i]==ele)
            return i;
    }
    return -1;
}


int main(){

    int arr[10],n;
    cout<<"enter array elements "<<endl;
    for(int i = 0 ;i < 10 ; i++ ){
        cin>>arr[i];
    }
    cout<<"enter the delement"<<endl;
    cin>>n;
    cout<<leftPosition(arr,10,n)<<endl<<rightPosition(arr,10,n);

    return 0;
}