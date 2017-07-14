#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    long long int n, n1;
    cin>>n;
    n1 = n-1;
    long long int s1, s2;
    s1 = n * ((n1 * (n1 + 1))/2);
    s2 = (n1 * (n1+1) * (2*n1 +1))/6;
    cout<< (s1 - s2) + n;
    return 0;
}
