#include<algorithm>
#include<iostream>
#include<vector>
#include<stdio.h>
using namespace std;

int main(){
    string X  = "Vanya";
    string Y  = "Vova";
    string XY = "Both";
    int n,x,y;
    cin>>n>>x>>y;
    vector<string> sec;
    int cntx = 0, cnty = 0;
    while ( cntx < x && cnty < y){
        if ( (long double)(cntx+1.0)/x > (long double)(cnty+1.0)/y){
            sec.push_back(Y);
            cnty ++;
        }else if((long double)(cntx+1.0)/x < (long double)(cnty+1.0)/y){
            sec.push_back(X);
            cntx ++;
        }else{
            sec.push_back(XY);
            sec.push_back(XY);
            cntx ++;
            cnty ++;
        }
    }
    long long int a;
    for (int i = 0 ; i < n ; i++){
        cin>>a;
        cout<<sec[(a -1 )% (x + y)]<<endl;
    }
}
