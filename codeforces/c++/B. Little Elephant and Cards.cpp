#include <bits/stdc++.h>
using namespace std;
int INF = 1000000;
int main(){
    int n ;
    cin>>n;
    map<int, int> freq;
    map<int, int> front_frequency;
    int upper, lower;
    for (int i = 0 ; i < n; i++){
        scanf("%d %d", &upper, &lower);
        if (upper == lower){
            freq[upper]++;
        }else{
            freq[upper]++;
            freq[lower]++;
        }
        front_frequency[upper]++;
    }
    int half = ceil(n/2.0);
    int mini = INF;
    int diff;
    for (map<int, int>::iterator it = freq.begin() ; it != freq.end(); it++){
        if (it->second >= half){
            diff = half - front_frequency[it->first];
            if (diff < mini){
                mini = diff;
            }
        }
    }
    if (mini == INF){
        cout<<-1;
    }else if (mini <= 0 ){
        cout<<0;
    }else{
        cout<< mini;
    }
    return 0;
}
