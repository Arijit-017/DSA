#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=3,b=78,c=1233;
    cout<<"The value of a without setwis: "<<a<<endl;
    cout<<"The value of b without setwis: "<<b<<endl;
    cout<<"The value of c without setwis: "<<c<<endl;

    cout<<"The value of a: "<<setw(4)<<a<<endl;
    cout<<"Thr value of b: "<<setw(4)<<b<<endl;
    cout<<"Thr value of c: "<<setw(4)<<c<<endl;

    return 0;
}