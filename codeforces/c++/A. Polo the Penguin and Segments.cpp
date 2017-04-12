#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, counter = 0;
    cin>>n;
    cin>>k;
    int temp1, temp2;
    for (int i = 0 ; i < n ; i++){
        cin>>temp1>>temp2;
        counter += temp2 - temp1 + 1;
    }
    int remain = counter % k;
    cout<< (k - remain)%k;
}
