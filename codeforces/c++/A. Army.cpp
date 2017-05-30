#include <iostream>

using namespace std;

int main()
{
    int n, a, b, sum = 0;
    cin>>n;
    int d[n+1];
    for (int i = 1 ; i <= n-1 ; i++){
        cin>>d[i];
    }
    cin>>a;
    cin>>b;
    
    for (int i = a; i < b ;i++)
        sum += d[i];
    
    cout<<sum;
    return 0;    
}
