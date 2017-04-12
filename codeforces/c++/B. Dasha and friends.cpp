#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,n, l, old, temp, firstA, firstB, A[50], B[50];
    cin>>n;
    cin>>l;

    cin>>firstA;
    old = firstA;
    for(i = 1; i < n ; i++){
        cin>>temp;
        A[i-1] = temp - old;
        old = temp;
    }
    A[i-1] = (l-old) + firstA;

    cin>>firstB;
    old = firstB;
    for(i = 1; i < n ; i++){
        cin>>temp;
        B[i-1] = temp - old;
        old = temp;
    }
    B[i-1] = (l-old) + firstB;

    int j = 0, k = 0, c = 0;

    for(i = 0; i < n; i++){
        j=0;
        k = i;
        c = 0;
        while(A[j] == B[k]){
            c++;
            j = (j + 1)%n;
            k = (k + 1)%n;
            if (c == n){
                cout<<"YES";
                return 0 ;
            }else if (c > n){
                break;
            }
        }
    }
    cout<<"NO";
    return 0;
}




















