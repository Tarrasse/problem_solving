#include <bits/stdc++.h>
using namespace std;
string win = "I become the guy.";
string lose = "Oh, my keyboard!" ;

int main(){
    bool a[101];
    int N = 0;
    cin>>N;
    int p,temp,q;
    cin>>p;
    for (int i = 1; i<101; i++){
        a[i] = 0;
    }
    for (int i=0; i<p;i++){
        cin>> temp;
        a[temp] = 1;
    }
    cin>>q;
    for(int i = 0; i<q ; i++){
        cin>> temp;
        a[temp] = 1;
    }
    bool f = 1;
    for (int i = 1; i<=N; i++){
        if (!a[i]){
            f = 0;
        }
    }
    if (f){
        cout<<win;
    }else{
        cout<<lose;
    }
    return 0;
}
