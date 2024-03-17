#include<iostream>
using namespace std;

void printArr(int arr[],int size){
    for(int i = 0 ;i < size ; i++ ){
        cout<<arr[i]<<" ";
    }
}

void swapAlternate(int arr[],int size){
    for(int i = 0; i < size ; i+=2 ){
        swap(arr[i],arr[i+1]);
    }
}

int main(){
    int even[8]={2,1,6,22,5,43,2,9};
    int odd[5]={4,77,32,82,3};

    swapAlternate(even,8);
    printArr(even,8);
    
    cout<<endl;
    
    swapAlternate(odd,5);
    printArr(odd,5);

   return 0;
}