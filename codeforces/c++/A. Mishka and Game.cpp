#include <bits/stdc++.h>
using namespace std;
int main(){

    int n =0;
    int Mishka = 0;
    int Mishka_counter = 0;
    int Chris = 0;
    int Chris_counter = 0;
    cin>>n;
    for (int i = 0; i< n; i++){
        scanf("%d %d", &Mishka, &Chris);
        if (Mishka > Chris){
            Mishka_counter++;
        }else if (Mishka < Chris) {
            Chris_counter++;
        }
    }
    if (Mishka_counter == Chris_counter){
        cout<<"Friendship is magic!^^";
    }else if (Mishka_counter < Chris_counter ){
        cout<<"Chris";
    }else{
        cout<<"Mishka";
    }


    return 0;
}
