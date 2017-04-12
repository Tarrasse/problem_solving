#include <bits/stdc++.h>
using namespace std;
const long MAX = 4e4;

bool first(pair<int, int> i, pair<int, int> j){
    return (i.first < i.second);
}

void print_type(int x){
    switch(x){
    case 1:
        cout<<"Carrots"<<endl;
        break;
    case 2:
        cout<<"Kiwis"<<endl;
        break;
    case 3:
        cout<<"Grapes"<<endl;
        break;
    }
}

int main(){
    int n,m,k,t;
    cin>>n>>m>>k>>t;
    vector< pair<int,int> > waste;
    int t1,t2;
    for (int i = 0; i < k ; ++i){
        cin>>t1>>t2;
        pair<int,int>temp(t1, t2);
        waste.push_back(temp);
    }
    sort(waste.begin(), waste.end(), first);
    for (int i = 0; i < t ; ++i){
        cin>>t1>>t2;
        int w = 0;
        bool a = true;
        for (int j = 0; j < waste.size() ; ++j){
            if (waste[j].first < t1 ||(waste[j].first == t1 && waste[j].second <t2))
                w++;
            if (waste[j].first > t1)
                break;

            if (waste[j].second == t2 && waste[j].first == t1){
                cout<<"Waste"<<endl;
                a = false;
                break;
            }
        }
        if (a){
            int total_space = (((t1 - 1)*m) + t2 - 1) - w;
            int type = total_space % 3;
            print_type(type);
        }

    }
    return 0;
}
