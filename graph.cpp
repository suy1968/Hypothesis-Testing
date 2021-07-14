#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void BFS(vector<int> adj[],int size,int start){
    queue <int> q;
    q.push(start);
    bool visited[size];
    for(int i=0;i<size;i++){
        visited[i]=false;
    }
    visited[start]=true;
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";
        for(int x: adj[curr]){
            if(visited[x]==false){
                visited[x]=true;
                q.push(x);
                
            }
        }
    }
}

void DFSUtil(vector <int> adj[],bool visited[],int start){
    visited[start]=true;
    cout<<start<<" ";
    for(int x:adj[start]){
        if(visited[x]==false)
        DFSUtil(adj,visited,x);
    }
}

void DFS(vector<int> adj[],int size,int start){
    bool visited[size];
    for(int i=0;i<size;i++){
        visited[i]=false;
    }
    DFSUtil(adj,visited,start);

}

int main(){
    vector <int> adj[7];
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,6);
    addEdge(adj,4,5);
    addEdge(adj,5,6);
    // BFS(adj,7,1);
    DFS(adj,7,1);
}