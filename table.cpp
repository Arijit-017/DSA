#include<iostream>
using namespace std;

long long appleAndCoupon(int n, int m,int arr[]){
    sort(arr.begin(), arr.end());
    int free = (n-m);
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    int ans = sum - arr[free];
    return ans;
}

int main()
{
  int s,n;
  printf("Enter the size of array ");
  cin>>s>>n;
  int arr[1000];
  printf("enter the number in choto theke boro\n");
  for (int i = 0; i < s; i++)
  {
    scanf("%d", &arr[i]);
  }

cout<<appleAndCoupon(s,n,arr);
  return 0;
}