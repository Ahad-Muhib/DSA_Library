#include<iostream>
using namespace std;
int ter(int arr[], int left, int right, int target){

if(left<=right){

    int mid1 = left+ (right-left)/3;
    int mid2 = right - (right-left)/3;
    if(target == arr[mid1]) return mid1;
    if(target == arr[mid2]) return mid2;

    if(target < arr[mid1])
        return ter(arr,left,mid1-1,target);
    if(target > arr[mid2])
        return ter(arr,mid2+1,right,target);




}
return -1;
}
int main(){

int n;
cout<<"size"<<endl;
cin>> n;
int arr[n];
cout<< "input "<<endl;
for(int i =0;i<n;i++)
    cin>>arr[i];

for(int i =0;i<n;i++)
    cout<< arr[i]<< " ";

    cout<<""<<endl;
    int target;
    cout<< "target ";
    cin>> target;
    int result = ter(arr,0,n-1,target);

    if(result !=-1) cout<< "found at "<< result<< endl;
    else cout<< "not found";
}
