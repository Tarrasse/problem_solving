#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<pair<string,string> > out;
    string s1,s2,t1,t2;
    int n;
    cin>>s1>>s2>>n;
    out.push_back(make_pair(s1, s2));
    for(int i = 0; i<n ; i++){
        cin>>t1>>t2;
        if (t1==s1)
            s1 = t2;
        else
            s2 = t2;
        out.push_back(make_pair(s1, s2));
    }
    for (int i = 0; i<= n ;i++)
        cout<<out[i].first<<" "<<out[i].second<<endl;
}
