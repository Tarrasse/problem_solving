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
    int n;
    string temp;
    map<string, int> dp;

    cin>> n;
    for(int i = 0; i<n;i++){
        cin>>temp;
        if (dp[temp] == 0){
            cout<<"OK"<<endl;
            dp[temp] = 1;
        }else{
            dp[temp] ++;
            temp += to_string(dp[temp] - 1);
            dp[temp] = 1;
            cout<<temp<<endl;
        }
    }

}
