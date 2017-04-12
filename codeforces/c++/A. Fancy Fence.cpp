#include <bits/stdc++.h>
using namespace std;
bool check (int a){
    double k;
    int kp;
    k = (1 /(0.5 - (a / 360.0)));
    kp = (int)k;
    return (k == kp);
}

int main(){
    int n, temp;
    cin>> n;
    for (int i = 0; i < n ; i++){
        cin>>temp;
        if (check(temp))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
