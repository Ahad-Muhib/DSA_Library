#include<iostream>
using namespace std;
void merge(int arr[], int left,int mid, int right){

int i,j,k;
int n1 = mid-left+1;
int n2 = right - mid;
int l[n1],r[n2];
 for(i = 0;i<n1;i++){
    l[i] = arr[left+i];
 }
 for(j = 0;j<n2;j++){
    r[j] = arr[mid+j+1];
 }
 i = 0,j=0,k=left;
 while(i<n1 && j<n2){
    if(l[i]<=r[j]){
        arr[k] = l[i];
        i++;
    }
    else{
        arr[k] = r[j];
    }
    k++;
 }
 while(i<n1){
    arr[k] = l[i];
    i++;k++;
 }
 while(j<n2){
    arr[k] = r[j];
    j++;k++;
 }





}




void mergesort(int arr[],int left,int right){
    if(left<right){
        int mid = left+(right-left)/2;
        mergesort(arr,left,mid);
        mergesort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }

}

int main(){

int n;
cout<<"size: "<<endl;
cin>>n;
int a[n];
cout<<"elements: "<<endl;
for(int i =0;i<n;i++)
cin>> a[i];
cout<<"unsorted: "<<endl;
for(int i =0;i<n;i++)
cout<< a[i]<<" ";

cout<<endl;

mergesort(a,0,n-1);
cout<< "sorted: "<<endl;
for(int i =0;i<n;i++)
cout<< a[i]<<" ";





}
