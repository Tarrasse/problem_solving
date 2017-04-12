#include <bits/stdc++.h>
using namespace std;
int MAX = 1e5;
int main(){
    int a[MAX];
    int counter = 0, temp, old_temp, n, maxi = 0;
    cin>>n;
    for (int i = 0; i<n ; i++ ){
        cin>>temp;
        if(temp >= old_temp){
            counter ++;
        }else{
            maxi = max(maxi, counter);
            counter = 1;
        }
        old_temp = temp;
    }
    cout<<max(counter, maxi);
    return 0;
}
