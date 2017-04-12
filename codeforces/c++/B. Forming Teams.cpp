#include <bits/stdc++.h>
using namespace std;
#define sz(v)			 ((int)((v).size()))
#define FORs(i, v)       for(int i=0;i<sz(v);++i)
#define FOR(i, n)        for(int i=0;i<(int)(n);++i)
#define pb(x)            push_back(x)
typedef long long ll;


enum status {PATH = 1, CYCLE = 2};

status dfs(int, int, int&);

vector< vector<int> > graph;
vector<int> vis;

int main(){
    int n, m;
    cin>>n>>m;

    graph = vector<vector<int> >(n);
	vis = vector<int>(n);

    //graph construction
    for (int i = 0; i< m; i++){
        int a,b;
        cin>>a>>b;
        --a;--b;
        graph[a].pb(b);
        graph[b].pb(a);
    }

    int removeCounter = 0;

    FOR(i, n){
        if (! vis[i]){
            int cnt = 0;
            status v = dfs(i, -1, cnt);
            if (v == CYCLE && (cnt % 2 == 1)){
                removeCounter ++;
            }
        }
    }
    removeCounter += ((n-removeCounter) % 2 == 1 );
    cout<<removeCounter<<endl;
    return 0;

}

status dfs (int cur, int prnt, int & cnt){
    if (vis[cur])
        return CYCLE;

    vis[cur] = 1;

    FORs(i, graph[cur]){
        int child = graph[cur][i];
        if (child != prnt){
            cnt ++;
            if (dfs(child, cur, cnt) == CYCLE)
            return CYCLE;
        }
    }
    return PATH;
}



