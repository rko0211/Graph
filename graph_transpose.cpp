#include <bits/stdc++.h>
using namespace std;
void addEdge(vector<int> adj[], int src, int destination)
{
  adj[src].push_back(destination);
}
void displayGraph(vector<int> adj[], int v)
{
  for (int i = 0; i < v; i++)
  {
    cout << i << " -> ";
    for (auto &it : adj[i])
    {
      cout << it << " ";
    }
    cout << endl;
  }
}
void graphTranspose(vector<int> adj[], vector<int> adjtranspose[], int v)
{
  for (int i = 0; i < v; i++)
  {
    for (auto &it : adj[i])
    {
      addEdge(adjtranspose, it, i);
    }
  }
}
int main()
{

  int v = 5;
  vector<int> adj[v];

  addEdge(adj, 0, 1);
  addEdge(adj, 0, 4);
  addEdge(adj, 0, 3);
  addEdge(adj, 2, 0);
  addEdge(adj, 3, 2);
  addEdge(adj, 4, 1);
  addEdge(adj, 4, 3);

  displayGraph(adj, v);

  vector<int> adjTranspose[v];
  graphTranspose(adj, adjTranspose, v);

  cout << "Transpose of The graph G is\n";

  displayGraph(adjTranspose, v);

  return 0;
}