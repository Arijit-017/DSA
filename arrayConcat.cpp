#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,3,4,5},out[10];
    int i = 0;
    // for(int i = 0 ; i<5 ; i++){
    //     out[j++]=arr[i];
    // }
    // for(int i = 0 ; i<5 ; i++){
    //     out[j++]=arr[i];
    // }
    copy(arr,arr+5,out);
    copy(arr,arr+5,out+5);
    for(int i : out){
        cout<<i<<"   ";
    }
    return 0;
}