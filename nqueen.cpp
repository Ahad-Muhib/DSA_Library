#include<iostream>
using namespace std;


#define max 15

int board[max][max];
int solutions = 0;


 void printsol(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){  
            if( board[i][j] == 1)
            cout<<"Q";
            else
            cout<<".";

        }
        cout<<endl;
    }
    cout<<endl;
 }

 bool safe(int row,int col,int n){
    for(int i=0;i<row;i++){
        if(board[i][col] == 1)
        return false;
    }
    for(int i=row-1, j=col-1;i>=0 && j>=0;i--,j--){
        if(board[i][j] == 1)
        return false;

    }
    for(int i=row-1,j=col+1;i>=0 && j<n ; i--,j++){
        if(board[i][j] == 1)
        return false;
    }
return true;
 }
  void solve(int row,int n){

    if(row == n){
        solutions++;
        cout<<solutions<<endl;
        printsol(n);

    }

    for(int col=0;col<n;col++){
        if(safe(row,col,n)){
            board[row][col] = 1;
            solve(row+1,n);
            board[row][col] = 0;

        }
    }

  }


int main(){

    int n;
    cout<<"enter numbers: "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            board[i][j] = 0;

        }
    }
    solve(0,n);
}

