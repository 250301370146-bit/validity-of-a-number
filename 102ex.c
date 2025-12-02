#include<stdio.h>
int main(){
    int a,b;
    printf("enter 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    printf("---comparison operator---");
    if(a>b){
        printf("%d greaterthan %d\n",a,b);
    }
    if(a>b){
        printf("%d less than %d\n",b,a);
    }
    if(a>0&&b>0){
        printf("%dand%d are positive\n",a,b);
    }
    printf("---conditional operator---");
    if(a>0 && b>0){
        printf("%d&%d are positive integer\n",a,b);
    }
    return 0;
    
}