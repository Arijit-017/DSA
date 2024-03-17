#include <bits/stdc++.h> 
using namespace std;
bool checkPalindrome(char a[],int n)
{
    int start = 0 ;
    int end = n-1;
    while(start<=end){
    if(!((a[start]>='a' && a[start]<='z')||(a[start]>='0' && a[start]<='9'))){
            start++;
        }
        else if(!((a[end]>='a' && a[end]<='z')||(a[end]>='0' && a[end]<='9'))){
            end--;
        }
        else{
            if(a[start]!=a[end]){
                return 0;
            }
            start++;
            end--;
        }
    }    
    return 1;
}
int main(){
    char s[15];
    cin>>s;
    int n = sizeof(s);
    cout<<checkPalindrome(s,n);
    return 0;
}