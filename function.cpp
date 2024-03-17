#include<iostream>
using namespace std;

int sum(int,int);
int main(){
    int num1,num2;
    cout<<"enter two number";
    cin>>num1>>num2;
    cout<<"The sum is :"<<sum(num1 , num2);
    return 0;
}
int sum(int a, int b){
    int c = a + b;
    return c;
}