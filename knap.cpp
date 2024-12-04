#include<iostream>
#include<algorithm>

using namespace std;
int knap(int c, int n, int wgt[], int val[]){

    int dp[n+1][c+1];
    for(int i=0;i<=n;i++){
        for(int k=0;k<=c;k++){
            if(i==0||k==0)
            dp[i][k] = 0;

            else if(wgt[i-1]<=k)
            dp[i][k] = max( val[i-1]+dp[i-1][k-wgt[i-1]] , dp[i-1][k]);

            else
            dp[i][k] = dp[i-1][k];
        }
    }
    return dp[n][c];

}
int main(){
    int n;
    cout<<"size"<<endl;
    cin>>n;

    int val[n],wgt[n];
    cout<<" enter values: "<<endl;
    for(int i=0;i<n;i++)
    cin>>val[i];
    for(int i=0;i<n;i++)
cout<<" "<<val[i];
    
    cout<<endl;




    cout<<"enter weight: "<<endl;
    for(int i=0;i<n;i++)
    cin>>wgt[i];

        for(int i=0;i<n;i++)
cout<<" "<<wgt[i];
    cout<<endl;



int c;
cout<<"enter size: "<<endl;
cin>>c;

  
     cout<<knap(c,n,wgt,val)<<endl;

}