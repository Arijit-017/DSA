#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,c,n;
    cout<<"Enter the n-th number of fibomacci series"<<endl;
    cin>>n;
    cout<<a<<"\t";
    while(b<n){
        c=b;
        b=a+b;
        a=c;
        cout<<a<<"\t";
    }
    return 0;
}