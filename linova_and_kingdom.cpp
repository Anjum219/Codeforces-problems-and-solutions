#include<bits/stdc++.h>
#define FastIO ios_base::sync_with_stdio(false) ; cin.tie(0);

#define INDUSTRY 1
#define TOURIST 2

using namespace std;

const int N = 2e5 + 1;
int parent[N], neighbor[N], depth[N], descendant[N], happiness[N];
vector<int> adj[N];

int dfs( int u ){
    for( int i = 0; i < neighbor[u]; i++ ){
        int v = adj[u][i];
        if( parent[v] == - 1 ){
            parent[v] = u;
            depth[v] = depth[u] + 1;
            descendant[u] += dfs(v);
        }
    }

    return descendant[u]+1;
}

int main(){
    int n, k, u, v;
    cin>>n>>k;

    for( int i = 1; i <= n; i++ ){
        parent[i] = -1;
        neighbor[i] = 0;
        depth[i] = 0;
        descendant[i] = 0;
        happiness[i] = 0;
    }
    parent[1] = 0;

    for( int i = 1; i < n; i++ ){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        neighbor[u]++;
        neighbor[v]++;
    }

    dfs(1);

    for( int i = 1; i <= n; i++ ){
        happiness[i] = depth[i] - descendant[i];
    }
    sort(happiness+1, happiness+n+1, greater<int>());

    long long int sum = 0;
    for( int i = 1; i <= k; i++ ){
        sum += happiness[i];
    }
    cout<<sum;

    return 0;
}
