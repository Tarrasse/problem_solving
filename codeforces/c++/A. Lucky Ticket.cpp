#include <bits/stdc++.h>
using namespace std;
string yes = "YES";
string no = "NO";
int main(){
    int n = 0;
    cin>>n;

    string s;
    cin>> s;

    int first_sum = 0;
    int last_sum = 0;
    int k=0;
    for (int i = 0; i < n/2 ; i++){
        if ((s[i] == '4') || (s[i] == '7')){
            k = s[i]-'0';
            first_sum += k;
        }else{
            cout<<no;
            return 0;
        }
    }
    for (int i = n/2; i < n ; i++){
        if ((s[i] == '4') || (s[i] == '7')){
            k = s[i]-'0';
            last_sum += k;
        }else{
            cout<<no;
            return 0;
        }
    }

    if (first_sum == last_sum){
        cout<<yes;
    }else{
        cout<<no;
    }

    return 0;
}
