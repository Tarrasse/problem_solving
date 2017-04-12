#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int error = 0;
    int tempA, tempG;
    for (int i = 0 ; i < n ; i++){
        cin>>tempA>>tempG;
        if (error + tempA <= 500 ){
            error += tempA;
            cout<<'A';
        }else{
            error -= tempG;
            cout<<'G';
        }
    }
}
