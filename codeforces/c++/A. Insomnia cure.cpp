#include <bits/stdc++.h>
using namespace std;
int main(){

    int k,l,m,n,d;
    cin>>k>>l>>m>>d>>n;
    set<int> s;
    if (k == 1 || l == 1 || m == 1){
        cout<<n<<endl;
        return 0;
    }

    int i = 1 ,a = k;
    while(a <= n){
        s.insert(a);
        i++;
        a = k * i;
    }

    i = 1 ,a = l;
    while(a <= n){
        s.insert(a);
        i++;
        a = l * i;
    }

    i = 1 ,a = m;
    while(a <= n){
        s.insert(a);
        i++;
        a = m * i;
    }

    i = 1 ,a = d;
    while(a <= n){
        s.insert(a);
        i++;
        a = d * i;
    }

    cout<<s.size()<<endl;
    return 0;
}
