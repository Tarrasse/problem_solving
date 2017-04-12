#include <bits/stdc++.h>
using namespace std;
int main(){
    char A[4][4], temp;
    for (int i = 0; i<4 ; i++){
        for(int j = 0; j<4 ; j++){
            cin>>temp;
            A[i][j] = temp;
        }
    }
    int counter = 0;
    for (int i = 0; i<3 ; i++){
        for(int j = 0; j<3 ; j++){
            counter = 0;
            char color = A[i][j];

            if(A[i+1][j] == A[i][j+1] && A[i+1][j] == A[i+1][j+1]){
                cout<<"YES"<<endl;
                return 0;
            }

            if(A[i+1][j] == color ){
                counter ++;
            }
            if(A[i+1][j+1] == color){
                counter ++;
            }
            if(A[i][j+1] == color){
                counter ++;
            }

            if (counter == 2 || counter == 3){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
