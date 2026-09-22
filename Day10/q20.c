#include<stdio.h>
int main() {
    int d;
    scanf("%d",&d);
    char* x[]= {
        "","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"
    }
    ;
    if(d>=1&&d<=7)printf("%s",x[d]);
    else printf("Invalid day");
    return 0;
}


