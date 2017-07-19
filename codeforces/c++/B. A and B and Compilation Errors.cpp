#include <bits/stdc++.h>

#define all(v)				((v).begin()), ((v).end())
#define sz(v)				((int)((v).size()))
#define clr(v, d)			memset(v, d, sizeof(v))
#define repi(i, j, n) 		for(int i=(j);i<(int)(n);++i)
#define repd(i, j, n) 		for(int i=(j);i>=(int)(n);--i)
#define repa(v)				repi(i, 0, sz(v)) repi(j, 0, sz(v[i]))
#define rep(i, v)			repi(i, 0, sz(v))
#define lp(i, cnt)			repi(i, 0, cnt)
#define lpi(i, s, cnt)		repi(i, s, cnt)
#define P(x)				cout<<#x<<" = { "<<x<<" }\n"
#define pb					push_back
#define MP					make_pair


typedef long long ll;
typedef long double ld;

using namespace std;

ll solve (vector<ll> a, vector<ll> b){
    ll soln;
    map<int, int> temp;
    for (int i = 0; i<b.size(); i++){
        temp[b[i] ] += 1;
    }
    for (int i = 0; i<a.size(); i++){
        if (temp[a[i] ] == 0){
            soln = a[i];
            break;
        }else{
            temp[a[i] ] -= 1;
        }
    }
    return soln;
}

int main()
{
    ll n ;
    cin>>n;
    vector <ll>a(n),b(n-1),c(n-2);
    for (int i = 0; i<n; i++)
        cin>> a[i];
    for (int i = 0; i<n-1; i++)
        cin>> b[i];
    for (int i = 0; i<n-2; i++)
        cin>> c[i];

    cout<<solve(a,b)<<endl;
    cout<<solve(b,c)<<endl;
}
