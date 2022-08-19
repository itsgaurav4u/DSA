#include<bits/stdc++.h>
using namespace std;


int partition(int arr[],int s,int e){

    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot)
        {
            cnt++;

        }

    }
    int pivotindex=s+cnt;
    swap(arr[pivotindex],arr[s]);

    int i=s;
    int j=e;
    while( i< pivotindex && j> pivotindex){
        while(arr[i]<pivot)
        {
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;


}

void quick_sort(int arr[],int s,int e)
{
    //base case
    if(s>=e){
        return;
    }
    int p = partition(arr,s,e);
    quick_sort(arr,s,p-1);
    quick_sort(arr,p+1,e);

}

int main(){
    int arr[5]={2,4,1,6,9};
    int n=5;
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    return 0;
}