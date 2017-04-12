#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, z, i = 1, counter = 0;
    cin>>n>>m>>z;
    while (i*n <= z){
        if ((i*n)%m == 0){
            counter ++;
        }
        i++;
    }
    cout<<counter;
    return 0;
}
