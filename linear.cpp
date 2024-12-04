#include<iostream>
using namespace std;

int lin(int a[], int n, int target){

for(int i=0;i<n;i++){
 if(a[i] == target) return i;



}
return -1;
}




int main(){

int n;
cout<< "Enter size" << endl;
cin>> n;
int a[n];
for(int i=0;i<n;i++){
    cin>> a[i];

}
for(int i=0;i<n;i++){
    cout <<"  "<<a[i];

}
cout<< endl;
int target;
cout<< "enter target: " << endl;
cin>> target;
int result = lin(a,n,target);
if(result!= -1) cout<< result;
else cout<< "not found"<<endl;

}
