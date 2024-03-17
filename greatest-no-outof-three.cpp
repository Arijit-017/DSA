#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3;
    cout<<"Enter three number :"<<endl;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if (num1==num2 && num1==num3)
    {
        cout<<"behenchood sab equal hain";
    }
    
    else if (num1>num2 && num1>num3)
    {
            cout<<"The greatest number is "<<num1;
    }
    else if (num2>num3)
    {
        cout<<"The greatest number is "<<num2;
    }
    else{
        cout<<"The greatest number is "<<num3;}
    
    return 0;
}