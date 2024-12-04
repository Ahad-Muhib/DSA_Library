#include<iostream>
#include<algorithm>
using  namespace std;
int lcs(string& x, string& y, int i,int j ){
    if(x[i] == 0||y[j] == 0) return 0;

    if(x[i] == y[j]) return lcs(x,y,i,j);

    else return max(lcs(x,y,i+1,j), lcs(x,y,i,j+1));






}
int main(){

    string x,y;
    int i = 0,j=0;
    cout<<"1st: "<<endl;
    getline(cin,x);
    cout<<"2nd: "<<endl;

    getline(cin,y);

    cout<<"length: "<<lcs(x,y,i,j);
    




}