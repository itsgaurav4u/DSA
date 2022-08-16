#include<bits/stdc++.h>
using namespace std;
void bubble_Sort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
        }
    }
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[6]={3,6,5,2,6,9};
    bubble_Sort(arr,6);
    print(arr,6);
}