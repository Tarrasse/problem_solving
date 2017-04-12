#include <bits/stdc++.h>
using namespace std;
map<pair<int ,int>, bool> nodes;

vector<pair<int, int> > get_n(pair<int, int> top){
    vector<pair<int, int> > neig;
    int x = top.first;
    int y = top.second;
}
int main(){
    int x1, x2, y1, y2, n, r, s, e;
    cin>>x1>>y1>>x2>>y2;

    map<pair<int ,int>, bool> vis;
    map<pair<int ,int>, int > length;
    pair<int ,int> target(x2, y2);
    pair<int ,int> start(x1, y1);
    nodes[target] = true;
    nodes[start] = true;

    cin>>n;
    for (int i = 0 ;i < n ; i++){
        cin>>r>>s>>e;
        for (int j = s ; j > e ; j++){
            pair<int ,int> temp(r, j);
            nodes[temp] = true;
        }

    }

    queue<pair<int, int> > q;
    q.push(start);
    pair<int, int> t(-1, -1);
    //parent[start] = t;
    vis[start] = true;
    pair<int, int> top;

    while(! q.empty()){
        top = q.front();
        q.pop();
        if (top == target) break;
        vector<pair<int, int> > neig = get_n(top);
        for(int i = 0; i < neig.size() ; i++){
            if(! vis[neig[i]]){
                q.push(neig[i]);
                vis[neig[i]] = true;
                length[neig[i]] = length[top]+1;
            }
        }
    }
    if (top == target){
        cout<<length[top]<<endl;
    }else{
        cout<<-1<<endl;
    }

}
