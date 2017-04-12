#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, money;
    cin>>n;
    cin>>money;
    set<int> sellers;
    int c,temp;
    for (int i = 1; i <= n ; i++){
        cin>>c;
        for (int j = 1 ; j <= c ; j++){
            cin>>temp;
            if (temp < money){
                sellers.insert(i);
            }
        }
    }
    cout<<sellers.size()<<endl;
    for (set<int>::iterator it=sellers.begin(); it!=sellers.end(); ++it)
        cout <<*it<<" ";
    return 0;
}
