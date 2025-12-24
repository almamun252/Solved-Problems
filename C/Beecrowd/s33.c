#include<stdio.h>

int main() {
    int W, X, Y, Z;   
    scanf("Dia %d", &W);
    scanf("%d : %d : %d", &X, &Y, &Z);


    int W1, X1, Y1, Z1; 
    scanf(" Dia %d", &W1); 
    scanf("%d : %d : %d", &X1, &Y1, &Z1);

    int tem, tem1, tem2, tem3;

    tem= ((W*86400)+(X*3600)+(Y*60)+Z);
    tem1= ((W1*86400)+(X1*3600)+(Y1*60)+Z1);

    tem2=tem1-tem;
    tem3=tem2/86400;
    printf("%d dia(s)\n",tem3);

    tem2%=86400;
    tem3=tem2/3600;
    printf("%d hora(s)\n",tem3);

    tem2%=3600;
    tem3=tem2/60;
    printf("%d minuto(s)\n",tem3);

    tem2%=60;
    printf("%d segundo(s)\n",tem2);


    return 0;
}