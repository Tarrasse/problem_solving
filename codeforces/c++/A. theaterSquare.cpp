#include <iostream>
using namespace std;
int main(){
    long long a;
    long long n, m, N, M;
    cin>> n;
    cin>> m;
    cin>> a;
    if (n%a == 0){
        N = n/a;
    }else{
        N = n/a;
        N++;
    }
    if(m%a == 0){
        M = m/a;
    }else{
        M = m/a;
        M++;
    }
    cout<<M*N;
    return 0;
}
