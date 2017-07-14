#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int state = 1;
    for (int i = 0; i<n ;i++){
        cin>>a[i];
    }
    bool ok = false;
    for(int i = 1 ; i<n && state != 4;i++){
        switch(state){
        case 1:
            if (a[i] < a[i - 1]){
                state = 3;
            }else if (a[i] == a[i-1]){
                state = 2;
            }else {

            }
            break;
        case 2:
            if (a[i] < a[i - 1]){
                state = 3;
            }else if (a[i] == a[i-1]){

            }else {
                state = 4;
            }
            break;
        case 3:
            if (a[i] < a[i - 1]){

            }else if (a[i] == a[i-1]){
                state = 4;
            }else {
                state = 4;
            }
            break;
        }
    }

    if (state != 4)
        cout<<"YES";
    else
        cout<<"NO";
}
