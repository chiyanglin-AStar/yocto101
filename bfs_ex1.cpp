#include<bits/stdc++.h>
//#include <iostream>
using namespace std;
#define N 5
#if 1
class Graph{
    int V=N;
    vector <int> adj[N];
    bool bVisited[N]={false};
    public :
    void addEdge(int u,int v){
        adj[u].push_back(v);
    };
    
    void printGraph();
    void BFS(int n);
    void DFS(int n);
};

void Graph::BFS(int n){
    for(int i=0;i < N;i++){
        cout << "b[" << i << "]=" << bVisited[i] << " ";  
        bVisited[i] = false;
    }
    cout << endl;
    list<int> q_bfs;
    bVisited[n] = true;
    q_bfs.push_back(n);

    cout << "node :" << n << " BFS  traversal : ";
    #if 1
    while(!q_bfs.empty()){
        n=q_bfs.front();
        cout << " ->" << n ;
        q_bfs.pop_front(); 
        for(vector<int>::iterator i=adj[n].begin();i != adj[n].end();i++){
                //cout << " b[" << *i << "]=" << bVisited[*i] ;
                if(!bVisited[*i]){
                    bVisited[*i]=true;
                    q_bfs.push_back(*i);
                }                
        }
               
                
    }
    #endif  
    
    cout << endl << "this is BFS function" << endl;  
};

void Graph::DFS(int n){
    stack <int> s;
    bVisited[n] = true;
    
    //cout << "this is DFS function" << endl;  
};

void Graph::printGraph(){
    for(int j=0;j < V;j++){
        cout << " node " << j << " : ";
        for(vector<int>::iterator i=adj[j].begin();i != adj[j].end();i++){
            cout << " -> " << "" <<  *i << "" ;
        }
        cout << endl;
    }
    cout << "this is print Graph function  V=" << V << endl; 
}

#endif 
int main()
{
    Graph n1;
   #if 1  // BFS example data
    n1.addEdge(0, 1);
    n1.addEdge(0, 2);
    n1.addEdge(1, 2);
    n1.addEdge(2, 0);
    n1.addEdge(2, 3);
    n1.addEdge(3, 3);

    
   #else  // DFS example data
    n1.addEdge(0, 1);
    n1.addEdge(0, 2);
    n1.addEdge(1, 2);
    n1.addEdge(2, 0);
    n1.addEdge(2, 3);
    n1.addEdge(3, 3);
   #endif 
    
    n1.printGraph();
    n1.DFS(1);
    n1.BFS(2);
    
    cout << "Hello World" << endl;

    return 0;
}