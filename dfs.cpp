#include<iostream>
using namespace std;
void DFS(int v)
{

    int V;
    cout<<"enter vertex number: "<<endl;
    cin>>V;
cout<<"enter vertices: "<<endl;

int visited[V]={0};
int G[V][V];
for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
        cin>>G[i][j];
    }
}
visited[v] = 1;
printf("%d ", v);
int current=v;
for(int j=0; j<V; j++)
{
if(G[current][j]==1 && visited[j]==0)
{
DFS(j);
}
}
for (int i = 0; i < V; i++) {
        printf("Vertex %d is connected to: ", i);
        for (int j = 0; j < V; j++) {
            if (G[i][j] == 1) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }

}


int main()
{
DFS(0);

}
