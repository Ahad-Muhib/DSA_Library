#include<iostream>
using namespace std;
int bin(int a[], int l, int r, int target){

if(l<=r){
        int mid = l +(r-l)/2;
        if(target == a[mid]) return mid;
        if(target<a[mid]) return bin(a,l,mid-1,target);
        else return bin(a,mid+1,r,target);

}
return -1;
}
int main(){

int n;

cout<< "enter size"<< endl;
cin>> n;
int a[n];
for(int i = 0;i<n;i++){


    cin>> a[i];
}

for(int i =0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
int target;
cout<< "enter target"<< endl;
cin>> target;
    int result = bin(a,0,n-1,target);
    if (result != -1) cout<<"found at " <<result;
    else cout<< "not found" << endl;







}

