#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, max_number , min_number , counter = 0, temp;
    cin>> n;
    cin>> max_number;
    min_number = max_number;
    for (int i = 0 ; i < n-1 ; i++){
        cin>>temp;
        if (temp < min_number){
            counter ++;
            min_number = temp;
        }
        if (temp > max_number){
            counter ++;
            max_number = temp;
        }
    }
    cout<<counter;
}
