#include <bits/stdc++.h>
using namespace std;

auto sumOfGroup(int k) {
    auto ans = 0;
    long n = (k*(k-1))/2;
    for(long i = 0 ; i < k ; i++){
        ans = ans +((2*n)+1)+(2*i);
    }
    return ans;
    // Return the sum of the elements of the k'th group.

}

int main()
{
    int n ; 
    cin>>n;
    cout<<sumOfGroup(n);
    return 0;
}
