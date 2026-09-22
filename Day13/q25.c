#include<stdio.h>
int main() {
    double a,b;
    char op;
    scanf("%lf %c %lf",&a,&op,&b);
    switch(op) {
        case '+':printf("%.2f",a+b);
        break;
        case '-':printf("%.2f",a-b);
        break;
        case '*':printf("%.2f",a*b);
        break;
        case '/':if(b)printf("%.2f",a/b);
        else printf("Division by zero");
        break;
        case '%':printf("%d",(int)a%(int)b);
        break;
        default:printf("Invalid operator");
    }
    return 0;
}

