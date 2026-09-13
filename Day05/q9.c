#include<stdio.h>

#include <math.h>

int main() {

    double p,r,t;

    scanf("%lf%lf%lf",&p,&r,&t);

    double si=p*r*t/100,ci=p*(pow(1+r/100,t)-1);

    printf("Simple Interest=%.0f, Compound Interest=%.2f",si,ci);

    return 0;

}
