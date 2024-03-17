#include<iostream>
using namespace std;

int main(){
    int n ,c=1; 
    cin>>n;
    for(int i = 1 ; i <= n;i++){
        for(int j = 1; j <=i; j ++){
            cout<<c;
            c++;
            if(j<i){
                cout<<'*';
            }
        }
        cout<<endl;
    }
    for(int i = 1;i<= n;i++){
        for(int j = 1; j<= n - i + 1;j++){
            c--;
            cout<<c;
            if(j<n - i + 1){
                cout<<'*';
            }
        }
        cout<<endl;
    }
    return 0;
}