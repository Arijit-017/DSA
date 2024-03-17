#include<iostream>
using namespace std;

int findUnique(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[7]={1,6,7,10,6,7,1};

    cout<<findUnique(arr,7);
    return 0;
}