#include<stdio.h>
int main() {
    long long n,r=0;
    scanf("%lld",&n);
    long long x=n<0?-n:n;
    while(x) {
        r=r*10+x%10;
        x/=10;
    }
    if(n<0)r=-r;
    printf("%lld",r);
    return 0;
}
