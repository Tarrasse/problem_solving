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

vector<ll> get_primes (ll n){
    vector<ll> primes;

    if (n == 1){
        return primes;
    }
    for (ll d=1,i = 2; i*i <= n && primes.size() <= 3; i+=d, d=2){
        while(n%i == 0){
            primes.push_back(i);
            n/=i;
        }
    }
    if (n > 1)
        primes.push_back(n);
    return primes;
}

int main()
{
    ll n ;
    cin>>n;
    vector <ll> primes = get_primes(n);

    if (primes.size() <= 1){
        cout<<"1\n0";
    }else if(primes.size() == 2){
        cout<<"2";
    }else{
        cout<<"1\n"<<primes[0] * primes[1];
    }
}
