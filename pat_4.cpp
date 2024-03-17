#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=n*n;
    for(int i = 1 ;i <= n;i++){
        for(int j = 1;j<=n;j++){
            cout<<count--;
        }
        cout<<endl;
    }
    return 0;
}