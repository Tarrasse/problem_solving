#include <iostream>
#include <string>
using namespace std;

int main()
{
    string base, rest;
    cin>> base;
    cin>>rest;
    int separator = base.find("|");
    string right = base.substr(0, separator);
    string left = base.substr(separator+1);
    for(int i = 0; i < rest.size(); i++){
        if (right.size() > left.size()){
            left += rest[i];
        }else{
            right += rest[i];
        }
    }
    if (right.size() == left.size())
        cout<<right<<"|"<<left;
    else
        cout<<"Impossible";
    return 0;
}
