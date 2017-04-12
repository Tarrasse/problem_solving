#include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    int n = 0;
    cin>>n;
    int counter = 0;
    map<pair<int, int>, int> exist;
    map<int, int> x_counter;
    map<int, int> y_counter;
    for (int i = 0; i < n ; i++){
        cin>>x>>y;
        pair<int, int> temp(x, y);

        exist[temp] ++;
        x_counter[x] ++;
        y_counter[y] ++;

    }
    for (map<int, int>::iterator it = x_counter.begin(); it != x_counter.end() ; it++){
        int n = it->second;
        counter += (n*(n-1))/2;
    }
    for (map<int, int>::iterator it = y_counter.begin(); it != y_counter.end() ; it++){
        int n = it->second;
        counter += (n*(n-1))/2;
    }
    for (map<pair<int,int>, int>::iterator it = exist.begin(); it != exist.end() ; it++){
        int n = it->second;
        if (n>1)
            counter -= n-1;
    }
    cout<<counter<<endl;

    return 0;
}
