#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,sx,sy,ex,ey,i;
    cin>>n>>sx>>sy>>ex>>ey;
    char temp;
    for (i = 0; i<n ;i++){
        cin>>temp;
        switch(temp){
        case 'E':
            if(sx < ex){
                sx++;
            }
            break;
        case 'W':
            if(sx > ex){
                sx--;
            }
            break;
        case 'S':
            if(sy > ey){
                sy--;
            }
            break;
        case 'N':
            if(sy < ey){
                sy++;
            }
            break;
        }
        if (sx == ex && sy == ey)
            break;
    }
    if (sx == ex && sy == ey){
        cout<<i+1;
    }else{
        cout<<-1;
    }

}
