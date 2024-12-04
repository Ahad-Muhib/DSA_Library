#include<iostream>
using namespace std;

int fibdp(int n, int a[]){
    if(n == 0| n==1)
    return n;

    if(a[n]!= -1)
    return a[n];



    return a[n] = fibdp(n-1,a)+fibdp(n-2,a);


}


int init(int n){
    int a[n+1];
    for(int i=0;i<=n;i++)
    a[i] = -1;
    int result = fibdp(n,a);




}

int main(){
    int n;
    cout<<"number: "<<endl;

    cin>>n;
    int result = init(n);
    cout<<result;



}