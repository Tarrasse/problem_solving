#include <bits/stdc++.h>
using namespace std;
#define MAX 10
int main(){
    int n,m;
    const char wolf = 'W';
    const char pig = 'P';
    const char emp = '.';
    char A[MAX][MAX];
    cin >> n >> m;
    char temp;
    for(int i = 0; i < n ; i++){
        for(int j = 0; j<m ; j++){
            cin>>temp;
            A[i][j]= temp;
        }
    }
    int counter = 0;
    for(int i = 0; i< n ; i++){
        for(int j = 0; j<m ; j++){
            if (A[i][j] == wolf){
                bool t = 0;
                if ( i - 1 >= 0 && A[i-1][j] == pig){
                    t= 1;
                }
                if ( j - 1 >= 0 && A[i][j-1] == pig){
                    t= 1;
                }
                if ( i + 1 < n && A[i+1][j] == pig){
                    t= 1;
                }
                if ( j + 1 < m && A[i][j+1] == pig){
                    t= 1;
                }
                if (t)
                    counter ++;
            }
        }
    }
    cout<<counter<<endl;


}
