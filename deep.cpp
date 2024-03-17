#include<iostream>
using namespace std;

int main(){
    int n,v;
    cout<<"enter a number";
    cin>>n;
    for (int i = n; i>=0; i-=5)
    {
        v=i;
        cout<<v<<"\t";
    }
    
    return 0;
}