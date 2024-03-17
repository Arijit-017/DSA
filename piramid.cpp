#include<iostream>
using namespace std;

int main(){
    int n,oh;
    cout<<"enter the height of the piramid : ";
    cin>>n;
    oh=n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = oh; k > 1; k--)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        oh--;
    }
    
    return 0;
}