#include<iostream>
#include<queue>
using namespace std;
void bfs(int v){
    int V;
    cin>>V;
    int visited[V] = {0};
    int G[V][V];

    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
           cin>> G[i][j];
        }
    }

    queue<int> q;
    visited[v] = 1;
    cout<<" "<<v<<" ";
    q.push(v);
    while(!q.empty()){
        int current = q.front();
        q.pop();
        for(int j=0;j<V;j++){
            if(G[current][j] == 1 && visited[j] == 0){
                visited[j] = 1;
                cout<<" "<<j<<" ";
                q.push(j);

            }
        }
    }
cout<<endl;

  for(int i=0;i<V;i++){
        cout<<"vertex "<<i<<" is connected to: ";
        for(int j=0;j<V;j++){
            if(G[i][j] == 1)
            cout<<j<<" ";
            

        }
            cout<<endl;

    }


}

int main(){
    bfs(0);
    
  
}