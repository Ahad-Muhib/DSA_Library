#include<iostream>
#include <queue>
using namespace std;
int V = 5;
int visited[5];
int G[5][5] = {
{0,1,0,0,1},
{1,0,0,1,1},
{0,0,0,1,0},
{0,1,1,0,1},
{1,1,0,1,0}
};
void BFS(int v)
{
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
