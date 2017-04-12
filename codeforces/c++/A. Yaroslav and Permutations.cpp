#include <bits/stdc++.h>
using namespace std;
int main(){
    int  n, temp;
    cin>>n;
    map<int, int> counter;

    for(int i = 0 ; i < n ; i++){
        cin>>temp;
        counter[temp]++;
    }

    int max_value = counter.begin()->second;
    int max_elm = counter.begin()->first;
    for (map<int ,int>::iterator it = counter.begin(); it != counter.end(); it++){
        if (it->second > max_value){
            max_value = it->second;
            max_elm = it->first;
        }
    }
    if (n % 2 == 0){
        if (max_value > n/2){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }else{
        if (max_value > (n/2) + 1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
