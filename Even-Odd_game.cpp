#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a integer number to know even or odd :"<<endl;
    cin>>num;
    if(num%2==0){
        cout<<"The number is an even number.";
    }
    else{
        cout<<"The number is an odd number.";
    }
    return 0;
}