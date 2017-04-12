#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 0, ones = 0, zeros = 0;
    cin>>n;
    string s;
    cin>>s;
    for (int i = 0; i < n; i++){
        if (s.at(i) == '0'){
            zeros++;
        }else if (s.at(i) == '1'){
            ones++;
        }
    }
    int diff = max(zeros, ones) - min(zeros, ones);
    cout<<diff;
    return 0;
}
