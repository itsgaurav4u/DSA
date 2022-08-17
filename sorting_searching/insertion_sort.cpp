#include<bits/stdc++.h>
using namespace std;

void insertion_Sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
}
}

int main(){
    int arr[5]={2,4,5,7,6};
    insertion_Sort(arr,5);
    print(arr,5);
}