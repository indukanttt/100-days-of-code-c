#include<stdio.h>
int main() {
    int n;
    unsigned long long f=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)f*=i;
    printf("Factorial=%llu",f);
    return 0;
}

