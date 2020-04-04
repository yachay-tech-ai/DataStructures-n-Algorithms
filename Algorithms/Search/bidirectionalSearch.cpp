#include<bits/stdc++.h>

using namespace std;

class Graph{
  int V;  //Total number of nodes on a graph
  list<int> *adj;  //adjacency list
  public:
  Graph(int V);
  int isIntersecting(bool *s_visited, bool *t_visited);
  void addEdge(int u, int v);
  void printpath(int *s_parent, int *t_parent, int s, int t, int intersectNode);
  void BFSpass(list<int> *queue, bool *visited, int *parent);
  int biDirSearch(int s, int t);
};

//definitions of the functions
Graph::Graph(int V){
  this->V = V;
  adj = new list<int>[V];
 };
 
 void Graph::addEdge(int u, int v){
  this->adj[u].push_back(v);
  this->adj[v].push_back(u);
 };
 
 void Graph::BFSpass(list<int> *queue, bool *visited, int *parent){
  int current = queue->front();
  queue->pop_front();
  list<int>::iterator i;
  for(i = adj[current].begin(); i != adj[current].end(); i++){
    if(!visited[*i]){
      parent[*i] = current;
      visited[*i] = true;
      queue->push_back(*i);
    }
  }
 };
 
int Graph::isIntersecting(bool *s_visited; bool *t_visited){
  int intersectNode = -1;
  for(int i = 0; i < V; i++){
    if(s_visited[i] && t_visited[i])
      return i;
  }
  return -1;
}

void Graph::printPath(int *s_parent, int *t_parent, int s, int t, int intersectNode){
  vector<int> path;
  path.push_back(intersectNode);
  int i = intersectNode;
  while(i != t){
    path.push_back(s_parent[i]);
    i = s_parent[i];
  }
  
  reverse(path.begin(), path.end());
  i = intersectNode;
  while(i != t){
    path.push_back(t_parent[i]);
    i = t_parent[i];
  }
  
  for( auto it = path.begin(); it != path.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
};

void Graph::biDirSearch(int s, int t){
