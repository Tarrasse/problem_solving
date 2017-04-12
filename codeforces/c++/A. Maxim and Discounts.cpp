#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n ,temp, opt = INFINITY;
    vector<int> A;
    cin>>m;
    for (int i = 0 ; i < m ; ++i){
        cin>>temp;
        opt = min(opt, temp);
    }

    cin>>n;
    for (int i = 0 ; i < n ; ++i){
        cin>>temp;
        A.push_back(temp);
    }

    sort(A.begin(), A.end());

    long long int counter = 0, cnt = 0;
    int i = n-1;
    for (int i = n-1; i>= 0; i--){
        cnt++;
        counter+=A[i];
        if(cnt == opt){
            cnt = 0;
            i-=2;
        }
    }
    cout<<counter<<endl;
    return 0;
}
