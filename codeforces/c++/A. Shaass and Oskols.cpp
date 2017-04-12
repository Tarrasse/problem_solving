#include <bits/stdc++.h>
using namespace std;
int main(){
    int A[100], n, m;
    cin>>n;
    for (int i = 0 ; i < n ; i++){
        cin>>A[i];
    }
    cin>>m;
    int x, y;
    for (int i = 0 ; i < m ; i++){
        cin>>x>>y;
        A[x] += A[x-1] - y;
        A[x-2] += y-1;
        A[x-1] = 0;
    }
    for (int i = 0 ; i < n ; i++){
        cout<<A[i]<<endl;
    }
}
