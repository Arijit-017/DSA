#include<iostream>
using namespace std;

int main(){
    int num,count=1;
    cout<<"Enter a number to know is it prime or not :";
    cin>>num;
    for (int i = 2; i <= num/2; i++)
    {
        if (num%i==0)
        {
            count=0;
        }
    }
    if (count==0)
    {
        cout<<"It is not a prime number.";
    }
    else{
        cout<<"It is a prime number.";
    }
    
    return 0;
}