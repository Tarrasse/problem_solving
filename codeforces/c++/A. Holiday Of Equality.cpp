#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n, counter = 0, old_val = 0, temp = 0, diff = 0, maxi = 0;
    cin>> n;
    cin>> old_val;
    maxi = old_val;
    for (int i = 1; i < n; i++){
        cin>>temp;
        if (temp > maxi){
            old_val = maxi;
            maxi = temp;
            counter += i*(maxi - old_val);
        }else{
            counter+=(maxi - temp);
        }
    }
    cout<<counter;

    return 0;
}
