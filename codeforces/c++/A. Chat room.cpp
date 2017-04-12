#include <bits/stdc++.h>
using namespace std;
int main(){
    string h = "hello";
    string s ;
    cin>>s;
    int i = 0 ;
    for (int j = 0; j < s.size() ; j++){
        if (s[j] == h[i]){
            i++;
            if (i >= h.size()){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
    return 0;
}
