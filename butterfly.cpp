#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter a number :";
    cin>>n;
    m=n;
    for(int i=1;i<=n;i++){
        for(int a=1;a<=i;a++){
            cout<<a;
        }
        for (int b = (m-1); b >=1; b--)
        {
            cout<<" ";
        }
        for (int b = (m-1); b >=1; b--)
        {
            cout<<" ";
        }
        
        for(int c=1;c<=i;c++){
            cout<<c;
        }
        cout<<endl;
        m--;
    }
    
    for (int i = n; i >= 1; i--)
    {
       for(int a=1;a<=i;a++){
            cout<<a;
        }
        for (int b = (m-1); b >=1; b--)
        {
            cout<<" ";
        }
        for (int b = (m-1); b >=1; b--)
        {
            cout<<" ";
        }
        
        for(int c=1;c<=i;c++){
            cout<<c;
        }
        cout<<endl;
        m++; 
        
    }
    

    return 0;
}