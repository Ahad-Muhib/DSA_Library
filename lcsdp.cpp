 #include<iostream>
 #include<algorithm>
 #include<string>
 using namespace std;
 
 int lcs(const string &x, const string &y){
    int m = x.length();
    int n = y.length();

    int dp[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0)
            dp[i][j] = 0;

            else if(x[i-1]==y[j-1])
                dp[i][j] = 1+ dp[i-1][j-1];

            else
                dp[i][j] = max(  dp[i-1][j] , dp[i][j-1]  );
        }
    }
        return dp[m][n];

 }
 int main(){
    string x,y;
    cout<<"first: "<<endl;

    getline(cin,x);

    cout<<"2nd: "<<endl;

    getline(cin,y);

    int result = lcs(x,y);
    cout<<result;
 }