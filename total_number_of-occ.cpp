#include<iostream>
using namespace std;

//////////////////////////// ----To get the first index 0f the number----//////////////////////////

int firstOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else if(key < arr[mid]) {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

/////////////////////----- To get the last index of the number-------//////////////////////////////// 

int lastOcc(int arr[], int n, int key) {

    int s = 0, e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e) {

        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]) {
            s = mid + 1;
        }
        else if(key < arr[mid]) {
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }
    return ans;
}

////////////////////////----- Main Function -----////////////////////////

int main(){
    int arr[10]={1,1,3,3,3,5,5,5,5,5};
    cout<<lastOcc(arr,10,5)-firstOcc(arr,10,5)+1;

    return 0;
}