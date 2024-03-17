#include<iostream>
using namespace std;

int main(){
    int marks[4]={42,64,29,88};
    int* p = marks;
    cout<<"The value of marks[0] ia : "<<*p<<endl;
    cout<<"The value of marks[1] ia : "<<*(p+1)<<endl;
    cout<<"The value of marks[2] ia : "<<*(p+2)<<endl;
    cout<<"The value of marks[3] ia : "<<*(p+3)<<endl;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    return 0;
}