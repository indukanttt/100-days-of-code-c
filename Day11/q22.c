#include<stdio.h>
int main() {
    double cp,sp;
    scanf("%lf%lf",&cp,&sp);
    if(sp>cp)printf("Profit Percentage=%.2f",(sp-cp)/cp*100);
    else if(sp<cp)printf("Loss Percentage=%.2f",(cp-sp)/cp*100);
    else printf("No Profit No Loss");
    return 0;
}
