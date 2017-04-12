#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n, k;
    set<long long> dividors ;
    stack<long long> dividors2 ;
    cin>> n;
    cin>> k;
    for (int i = 1 ; i <= ((int)sqrt(n)+1) ; i++){
        if (n%i == 0 ){
            dividors.insert(i);
            dividors2.push(n/i);
            if(dividors.size() == k ){
                break;
            }
        }
    }
    while(! dividors2.empty()){
        dividors.insert(dividors2.top());
        dividors2.pop();

    }
    int counter = 0;

    for (set<long long>::iterator it = dividors.begin() ; it != dividors.end(); it++){
        counter++;
        if (counter == k){
            cout<<*it<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}

