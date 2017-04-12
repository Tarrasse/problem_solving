#include <bits/stdc++.h>
using namespace std;
int main(){
    int n ,start_index = 0, end_index = 0;
    char starts,ends, A[1001];
    cin>>n;
    for (int i = 0 ; i < n ; i++){
        cin>> A[i];
    }
    for (int i = 0 ; i < n ; i++){
        if (A[i] != '.'){
            starts = A[i];
            start_index = i;
            break;
        }
    }
    for (int i = n-1 ; i >= 0 ; i--){
        if (A[i] != '.'){
            ends = A[i];
            end_index = i;
            break;
        }
    }
    if(A[start_index] == 'R' && A[end_index] == 'R')
        cout<<start_index+1<<" "<<end_index+1+1<<"\n";

    else if(A[end_index] == 'L' && A[start_index] == 'L')
        cout<<end_index+1<<" "<<start_index-1+1<<"\n";

    else if(A[start_index] == 'R' && A[end_index] == 'L')
    {

        for(int i = start_index; i < n; ++i)
        {
            end_index = i;

            if(A[i] == 'L')
                break;
        }

        cout<<start_index+1<<" "<<end_index-1+1<<"\n";
    }

}
