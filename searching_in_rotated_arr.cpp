#include<iostream>
using namespace std;

int pivot(int arr[],int n){
	int s=0,e = n-1;
	int mid=s+(e-s)/2;
	while(s<e){
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return mid;
}

int search(int arr[],int n,int ele){
	int s=0,e = n-1;

	if(ele>=arr[0]){
		e=pivot(arr,5)-1;
	}
	else{
		s=pivot(arr,5);
	}

	int mid=s+(e-s)/2;

	while(s<e){
		if(arr[mid]==ele)
			return mid;
		else if(arr[mid]>ele)
			s=mid+1;
		else
			e=mid-1;
		mid=s+(e-s)/2;
	}
	return -1;
}

int main(){
	int arr[10]={10,1,2,3,4};
	int ele;
	cout<<"Enter element"<<endl;
	cin>>ele;
	cout<<search(arr,5,ele)<<endl;
	return 0;
}

	