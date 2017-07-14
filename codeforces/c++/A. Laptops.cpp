#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;


bool fun (pair<int,int> i,pair<int,int> j) { return (i.second < j.second); }


int main()
{
    int n, a,b;
    cin>> n;
    vector<pair<int, int> > rec(n);
    bool eq = true;
    for (int i = 0; i<n ; i++){
        cin>>a;
        cin>>b;
        if (a != b)
            eq = false;
        rec[i] = make_pair(a, b);
    }
    sort(rec.begin(), rec.end(), fun);

    if (eq){
        cout<<"Poor Alex";
        return 0;
    }
    bool ok = true;
    for (int i = 0; i<n-1 ; i++){
        if (rec[i].first > rec[i].first)
            ok = false;
    }
    if (ok){
        cout<<"Happy Alex";
    }else{
        cout<<"Poor Alex";
    }
}
