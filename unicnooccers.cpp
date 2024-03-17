#include<iostream>
using namespace std;

void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}


bool unic_occ(int arr[],int n){
  int check[1000],m=0;
  int s=0,var=1;
  while(var<n){
    if(arr[var]!=arr[s]){
      check[m]=var-s+1;
      s=var+1;
      m++;
      cout<<check[m];
    }
    var++;
  }
  sort(check,m);
  for(int i=0;i<m;i++){
    if(check[i]==check[i+1]){
      return false;
    }
  }
return true;

}

int main(){
  int arr[1000];
  int n;
  cout<<"Enter the size of array : ";
  cin>>n;
  cout<<"Enter "<<n<<" elements"<<endl;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  sort(arr,n);
  cout<<endl<<unic_occ(arr,n);


  return 0;
}