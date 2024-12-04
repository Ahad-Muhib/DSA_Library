#include<iostream>
#include <queue>
using namespace std;

void BFS(int v)
{
        int V;
    cout<<"enter vertex number: "<<endl;
    cin>>V;
cout<<"enter vertices: "<<endl;

int visited[V] = {0};
int G[V][V];
for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
        cin>>G[i][j];
    }
}


queue<int> Q;

visited[v] = 1;
printf("%d ", v);
Q.push(v);
while(!Q.empty())
{
int current = Q.front();
Q.pop();
for(int j=0; j<V; j++)
{
if(G[current][j]==1 && visited[j]==0)
{
visited[j] = 1;
printf("%d ", j);
Q.push(j);
}
}

}
cout<<endl;
 for (int i = 0; i < V; i++) {
        cout << "Vertex " << i << " is connected to: ";
        for (int j = 0; j < V; j++) {
            if (G[i][j] == 1) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}
int main()
{


BFS(0);
}
