/*거스름돈 계산하기*/
#include<stdio.h>
int main(){
    int dodo, gogo;
    int total,deposit, change, rest, menu;
    int w500, w100, w50,w10;
    int cnt_dodo, cnt_gogo;
    while(1)
    {
        printf("또또면 70원 꽁꽁바 30원 입니다. \n");
        printf("각각의 개수를 띄어서 입력하시오. \n");
        scanf("%d %d", &cnt_dodo, &cnt_gogo);
        dodo = 70* cnt_dodo;
        total = 30* cnt_gogo;
        printf("총금액은 %d입니다.\n", total);
        printf("투입할 금액을 입력하시오. \n");
        scanf("%d", &deposit);
        if (deposit>total){
            change = deposit - total;
            w500 = change /500;
            rest = change %500;
            w100 = rest /100;
            rest = %50;
            w50 = rest/50;
            rest = rest %50;
            w10 = rest 10;
            printf("또또면 전체 금액 : %d\n",dodo);
            printf("꽁꽁바 전체 금액 : %d\n",gogo);
            printf("거스름돈 : %d\n", change);
            printf("500: &d, 100: %d, 50,: %d10: %d\n",w500,w100,w50,w10);
}
    else {
        printf("금액이 부족합니다. 다시 입력하려면1 나가려면 0을 눌러주세요.");
        scanf("%d",&menu);
        if(menu==0)break;
        else continue;
    }

    }
    return 0;
}