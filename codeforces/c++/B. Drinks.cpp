#include <iostream>
#include <string>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    double sum = 0;
    cin>>n;
    int p[n];
    for (int i = 0; i<n; i++){
        cin>>p[i];
        sum+=p[i];
    }
    double out = sum/n;
    printf("%06f", out);
}
