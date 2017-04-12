#include <bits/stdc++.h>
using namespace std;
#define sz(v)			 ((int)((v).size()))
#define FORs(i, v)       for(int i=0;i<sz(v);++i)
#define FOR(i, n)        for(int i=0;i<(int)(n);++i)
#define pb(x)            push_back(x)
typedef long long ll;

int main(){
    int n;
    map<char, string> mp;
    mp['0'] = mp['1'] = "";
    mp['2'] = "2";
    mp['3'] = "3";
    mp['4'] = "223";
    mp['5'] = "5";
    mp['6'] = "35";
    mp['7'] = "7";
    mp['8'] = "2227";
    mp['9'] = "2337";

    cin>>n;
    string in, out;
    cin>>in;
    for (int i = 0; i < n ; i++){
        out += mp[in[i]];
    }
    sort(out.begin(), out.end());
    for (int i = out.size()-1 ; i >= 0 ; i--)
        cout<<out[i];
    return 0;
}

