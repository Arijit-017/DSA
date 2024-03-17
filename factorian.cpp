#include<iostream>
using namespace std;

int main(){
    int num,out=1;
    cout<<"Enter a number to get the factorial";
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        out=out*i;
    }
    cout<<"The factorial is :"<<out;
    return 0;
}