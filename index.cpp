#include<iostream>

using namespace std;

int main(){
    //built in data types
    float d=34.4f;
    long double e = 34.4L;
    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
    //Refarence variables
    float x = 455;
    float & y = x;
    cout<<x<<endl;
    cout<<y<<endl;
    //Typecasting
    int a = 45;
    float b = 45.46;
    cout<<"the value of a is "<<float(a)<<endl;
    cout<<"the value of a is "<<int(b)<<endl;
    int c = int(b);
    cout<<"the expression is"<<a + b;
    cout<<"the expression is"<<a + int(b);
    cout<<"the expression is"<<int(a) + b;
    return 0;
}