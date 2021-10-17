#include<bits/stdc++.h>
#define LL long long int

using namespace std;

map<string, int> directionToBitmask;

bool doesFallInsideArea( int v, int n, int m ){
    if( 0 <= v && v < n*m )
        return true;
    else
        return false;
}

bool hasNoAdjacentWall( string direction, int pos ){
    return !(directionToBitmask[direction] & pos);
}

void DFS( int u, vector<int> adj[], vector<bool> &visited, int &count ){
    visited[u] = true;
    count++;

    for( int v = 0; v < adj[u].size(); v++ ){        
        if(visited[adj[u][v]] == false)
            DFS(adj[u][v], adj, visited, count);        
    }    
}

int main(){
    int n, m;
    cin>>n>>m;

    int V = n*m;
    vector<int> adj[V];

    directionToBitmask["North"] = 8;
    directionToBitmask["East"] = 4;
    directionToBitmask["South"] = 2;
    directionToBitmask["West"] = 1;

    int tile;
    int u, v;

    for( int i = 0; i < n; i++ ){
        for( int j = 0; j < m; j++ ){
            cin>>tile;
            u = m*i + j;

            v = u - m;
            if( hasNoAdjacentWall("North", tile) && doesFallInsideArea(v, n, m) ){
                adj[u].push_back(v);
            }

            v = u + 1;
            if( hasNoAdjacentWall("East", tile) && doesFallInsideArea(v, n, m) ){
                adj[u].push_back(v);
            }

            v = u + m;
            if( hasNoAdjacentWall("South", tile) && doesFallInsideArea(v, n, m) ){
                adj[u].push_back(v);
            }

            v = u - 1;
            if( hasNoAdjacentWall("West", tile) && doesFallInsideArea(v, n, m) ){
                adj[u].push_back(v);
            }
        }
    }

    int connected = 0;
    int nodesInConnected[V];
    vector<bool> visited;

    for( int v = 0; v < V; v++ ){
        visited.push_back(false);
    }

    for( int v = 0; v < V; v++ ){
        if(visited[v] == false ){
            int count = 0;
            DFS(v, adj, visited, count);
            nodesInConnected[connected] = count;
            connected++;
        }  
    }

    sort(nodesInConnected, nodesInConnected+connected, greater<int>());

    for( int i = 0; i < connected; i++ ){
        cout<<nodesInConnected[i]<<' ';
    }

    return 0;
}
