#include <bits/stdc++.h>
using namespace std;
const int MAX = 2e5;
int main(){
    int n, temp;
    cin >>n;
    long long int a[MAX];
    for (int i = 1; i <= n ; i++){
        cin>>temp;
        a[i] = temp;
    }
    for (int i = 1; i <= (n-i)+1 ; i++){
        if (i&2 != 0)
            swap(a[i], a[(n-i)+1]);
    }
    for (int i = 1; i <= n ; i++)
        cout<<a[i]<<" ";

}
