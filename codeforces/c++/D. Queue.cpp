#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0 ; i < n ; i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    int counter = 0;
    int sum = 0;
    for (int i = 0 ; i < n ; i++){
        if (v[i] >= sum){
            counter ++;
            sum += v[i];

        }
    }
    cout<<counter<<endl;
}
