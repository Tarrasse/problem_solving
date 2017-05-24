#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, k, temp, sum = 0;
    float avg2, n2;
    cin>> n>> k;
    for(int i=0; i< n; i++){
        cin>> temp;
        sum += temp;
    }
    avg2 = k - 0.5;
    n2 = (sum - (n * avg2)) / (avg2 - k);
    if (n2 <= 0){
        cout<<0;
    }else{
        cout<<ceil(n2);
    }
}
