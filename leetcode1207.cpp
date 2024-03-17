#include<iostream>
using namespace std;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

bool uniqueOccurrences(int arr[],int size) {
        int ans = 1;
        int i=0;
        while(i<size){
            int count=1;
            for(int j = i+1;j<size;j++){
                if (arr[i]==arr[j]){
                    count++;
                }
            }
            ans=!(ans^count);
        }
        cout<<ans;
        if(ans==0){
            return 1;
        }
        return 0;
    }

int main(){
    int arr[10]={-3,0,1,-3,1,1,1,-3,10,0};
    bubbleSort(arr,10);
    if(uniqueOccurrences(arr,10)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}