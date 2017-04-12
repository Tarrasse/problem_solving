#include <bits/stdc++.h>
using namespace std;
int main(){
    int A[]= {
    4,
    7,
    44,
    47,
    74,
    77,
    444,
    447,
    474,
    744,
    774,
    747,
    477,
    777
    };
    int n ;
    bool t = false;
    cin >>n;
    for(int i = 0;i<14;i++){
        if (n%A[i] == 0){
            t = true;
        }
    }
    if (t){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
