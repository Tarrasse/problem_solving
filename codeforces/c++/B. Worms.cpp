#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    int n, m, temp;
    cin>>n;
    vector<int> A(n);
    cin>>A[1];
    for (int i = 2; i<=n; i++){
        cin>>temp;
        A[i] = A[i - 1] + temp;
    }
    int q;
    cin>>m;
    for ( int i=1;i<=m;i++)
    {
        cin>>q;
        long l=1;
        long r=n;
        while (l< r)
        {
              long middle = l+r;
              middle/=2;
              if (A[middle]<q){l=middle+1;}
              else r = middle;
        }
        cout <<l<< endl;
    }

}
