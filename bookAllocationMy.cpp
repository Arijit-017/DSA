#include<iostream>
using namespace std;

int main(){
	int arr[5]={10,20,30,40,50};
	int loc = 1,out[5],comb[2];
	while(loc<5){
		int s1=0,s2=0;
		int loc = 1;
		for(int i = 0;i < loc;i++){
			s1 = s1 + arr[i];
		}
		for(int i = loc ; i < 5 ;i++){
			s2 = s2 + arr[i];
		}
		if(s1>s2)
			out[loc-1] = s1;
		else
			out[loc-1] = s2;
		loc++;
	}
	for(int i=0;i<4;i++){
		if(out[i]<out[i+1])
			comb[1]=out[i];
	}
	for(int i=0;i<5;i++){
		comb[2]=comb[2]+arr[i];
	}
	comb[2]=comb[2]-comb[1];
	std::cout<<comb[1]<<endl<<comb[2]<<endl;
	return 0;
}