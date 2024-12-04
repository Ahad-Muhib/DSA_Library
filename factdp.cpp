#include<iostream>
using namespace std;
int factdp(int n,int a[]){
    if(n==0||n==1)
    return 1;


    if(a[n] !=-1)
    return a[n];



      return a[n] = n*factdp(n- 1, a);


}
int init(int n){
    int a[n+1];
    for(int i=0;i<=n;i++)
    a[i] = -1;
    int result = factdp(n,a);



}
int main(){
    int n;
    cout<<"numb: "<<endl;
    cin>>n;
    
    int result = init(n);
    cout<<result;


}