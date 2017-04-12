#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, sum = 0;
    cin>>n;
    vector <int> A(n);
    for (int i = 0 ; i < n ; i++){
        cin>>A[i];
        sum += A[i];
    }
    int x = ceil(sum / (n-1.0));
    cout<<x<<endl;
}
