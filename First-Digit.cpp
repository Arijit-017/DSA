#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter any number to know the first digit of the number :";
    cin>>n;
    while (n/10!=0)
    {
        n=n/10;
    }
    
    cout<<n;
    return 0;
}