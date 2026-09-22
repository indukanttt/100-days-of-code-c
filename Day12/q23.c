#include<stdio.h>
int main() {
    int d,f=0;
    scanf("%d",&d);
    if(d>30)printf("Membership Cancelled");
    else {
        int x=d;
        if(x>5) {
            f+=10;
            x-=5;
        } else {
            x=0;
            f+=d*2;
        }
        if(d>5) {
            if(x>20) {
                f+=120;
                x-=20;
            } else {
                f+=x*6;
                x=0;
            }
        }
        if(x>0)f+=x*6;
        printf("Fine = %d",f);
    }
    return 0;
}


