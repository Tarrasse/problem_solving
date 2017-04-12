#include<stdio.h>
int main(){

    int n;
    int a,b,c;
    scanf("%d", &n);
    int counter = 0;
    int i = 0;
    for(i = 0 ; i < n ; i++){
        scanf("%d %d %d", &a, &b, &c);
        if ((a&&b) || (a&&c) || (b&&c))
            counter++;
    }
    printf("%d",counter);
    return 0;
}
