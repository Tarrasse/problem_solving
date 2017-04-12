#include <bits/stdc++.h>
using namespace std;
#define sz(v)			 ((int)((v).size()))
#define FORs(i, v)       for(int i=0;i<sz(v);++i)
#define FOR(i, n)        for(int i=0;i<(int)(n);++i)
#define pb(x)            push_back(x)
typedef long long ll;


int main(){
    int n,m,mini = 20000;
    cin>>n>>m;
    int A[m];

    FOR(i, m){
        cin>>A[i];
    }

    sort(A, A+m);

    FOR(i, m){
        FOR(j, m){
            if (abs(j - i) >= n-1 ){
                mini = min(mini, (abs(A[i] - A[j])));
            }
        }
    }
    cout<<mini<<endl;
    return 0;
}
