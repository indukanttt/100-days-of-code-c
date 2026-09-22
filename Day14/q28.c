#include<stdio.h>
int main() {
    int n;
    long long p=1;
    scanf("%d",&n);
    for(int i=2;i<=n;i+=2)p*=i;
    printf("Product=%lld",p);
    return 0;
}
