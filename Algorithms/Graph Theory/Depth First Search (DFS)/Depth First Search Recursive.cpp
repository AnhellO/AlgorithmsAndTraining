#include <iostream>
#include <vector>
#define SIZE 15
using namespace std;
/*
* @author Angel Santiago Jaime Zavala
* @version: 1.0.0
* Creating graph and using DFS recursive implementation to traverse it. Graph example taken from DFS Demo GIF.
*/

//Keep track of discovered nodes. 0 for not discovered, 1 for discovered. Same SIZE as Graph
vector<int> visited(SIZE, 0);

void constructGraph(vector<vector<int> > &G) {
  G[1].push_back(2);
  G[1].push_back(5);
  G[1].push_back(9);
  G[2].push_back(3);
  G[3].push_back(4);
  G[5].push_back(6);
  G[5].push_back(8);
  G[6].push_back(7);
  G[9].push_back(10);
}

//procedure DFS(G,v):
void DFS(vector<vector<int> > &G, int v) {
  //label v as discovered
  visited[v] = 1;
  cout << "Actual Node: " << v << '\n';
  //for all edges w in G.adjacentEdges(v) do
  for(int i = 0 ; i < G[v].size() ; i++) {
    int w = G[v][i];
    //if vertex w is not labeled as discovered then
    if(!visited[w]) {
      //recursively call DFS(G,w)
      DFS(G, w);
    }
  }
}

int main() {
  //Construct graph using adjacency list with std::vector
  vector<vector<int> > G(SIZE);
  //Input: A graph G and a vertex v of G. Let "1" be the root/starting node
  constructGraph(G);
  //Output: All vertices reachable from v labeled as discovered
  DFS(G, 1);
  return 0;
}
