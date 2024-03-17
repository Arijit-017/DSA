//Find the peak element of a Mountain array

#include<iostream>
using namespace std;
//finding the peak element function
int findPeak(int arr[],int n){
	int s=0,e=n-1;
	int mid = s+(e-s)/2;
	while(s<e){
		if(arr[mid]<arr[mid+1])
			s=mid+1;
		else
			e=mid;
		mid=s+(e-s)/2;
	}
	return mid;
}
int main(){
	int arr[]={1,4,5,3,2};
	cout<<"the peak element is "<<findPeak(arr,5)<<endl;
	return 0;
}