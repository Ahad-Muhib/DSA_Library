#include<iostream>
#include<stdlib.h>
using namespace std;

void merge(int arr[],int l , int m, int r){
    int i,j,k;
    int n1  = m-l+1;
    int n2 = r-m;
    int p[n1],q[n2];
    for( i = 0;i<n1;i++){
        p[i] = arr[l+i];
    }
    for( j = 0; j<n2;j++){
        q[j] = arr[m+1+j];
    }

    i = 0, j = 0, k = l;
    while(i<n1 && j<n2){
        if(p[i] <= q[j]){
        arr[k] = p[i];
        i++;
        }
        else{
            arr[k] = q[j];
            j++;
        }
        k++;
    }
      while (i < n1) {
    arr[k] = p[i];
    i++;
    k++;
  }
    while (j<n2){
        arr[k] = q[j];
        j++;
        k++;

    }


}




void mergesort(int arr[], int left, int right){

if(left<right){
    int mid = left + (right - left)/2;
    mergesort(arr,left,mid);
    mergesort(arr,mid+1,right);
    merge(arr,left ,mid ,right);

}



}
int main(){

    int n;
    cout<< "size"<<endl;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    cin>> arr[i];


        for(int i = 0; i<n; i++)
    cout<< arr[i];


     mergesort(arr,0,n-1);

        for(int i = 0; i<n; i++)
    cout<< arr[i];

}
