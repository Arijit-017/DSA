//if-else statement.
#include<iostream>
using namespace std;

int main(){
int age;
cout<<"Tell me your age : "<<endl;
cin>>age;
if(age<18 && age>0){
    cout<<"you can't came to this party|";
}
else if(age==18){
    cout<<"you are a kid, you can get kid pass | ";
}
else{
    cout<<"you can came to this party|";
}

    return 0;
}