#include<stdio.h>
int main(){
    int kor,eng,mat
    printf("korean",scanf("%d",&kor));
    printf("english",scanf("%d",&eng));
    printf("math",scanf("%d",&mat));
    kor>=70 && eng>=70 ||math>=80 ? printf("great"):printf("ok");
    return 0;
}