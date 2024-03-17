#include<iostream>
using namespace std;

int main(){
    int num1,num2;char n;
    cout<<"Enter two number"<<endl;
    cin>>num1>>num2;
    cout<<"press '+'  for addition/ '-' for substraction/ '*' for multiplication/ '/' for divition"<<endl; 
    cin>>n;
    switch (n)
    {
    case '+':
        cout<<(num1+num2);
        break;
    case '-':
        cout<<(num1-num2);
        break;
    case '*':
        cout<<(num1*num2);
        break;
    case '/':
        cout<<(num1/num2);
        break;
    
    default:
        cout<<"you are a behenchood";
        break;
    }
    return 0;
}