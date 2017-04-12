#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1, s2;
    cin>>s1;
    cin>>s2;
    int counter1 = 0, counter2 = 0;
    for (int i = 0; i<s1.length(); i++){
        counter1 += (int)tolower(s1[i]);
        counter2 += (int)tolower(s2[i]);
    }
    if (counter1 == counter2){
        cout<<0<<endl;
    }else if(counter1 > counter2){
        cout<<1<<endl;
    }else{
        cout<<-1<<endl;
    }
    return 0;
}
