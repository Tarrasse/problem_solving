#include <bits/stdc++.h>
using namespace std;
string heavy = "heavy";
string metal = "metal";
int main(){
    string s ;
    cin>> s;
    long long int heavy_counter = 0, metal_counter = 0;
    vector < vector<int> > words;
    for (int i = 0; i< s.size();i++){
        if (s[i]=='h'){
            if (s.substr(i, heavy.size()) == heavy){
                heavy_counter++;
                vector<int>v ;
                v.push_back(0);
                v.push_back(heavy_counter);
                v.push_back(metal_counter);
                words.push_back(v);
            }
        }
        if (s[i]=='m'){
            if (s.substr(i, metal.size()) == metal){
                metal_counter++;
                vector<int> v ;
                v.push_back(1);
                v.push_back(heavy_counter);
                v.push_back(metal_counter);
                words.push_back(v);
            }
        }
    }
    long long int counter= 0;
    for (int i = 0; i<words.size();i++){
        if (words[i][0] == 0){
            counter += (metal_counter - words[i][2]);
        }
    }
    cout<<counter;


    return 0;
}
