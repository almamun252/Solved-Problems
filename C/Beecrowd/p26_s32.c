#include<stdio.h>
int main(){
	int nota,int_n;
	double n;
	scanf("%lf",&n);

	printf("NOTAS:\n");

	int_n=(int)(n*100);
	nota=int_n/10000;
	printf("%d nota(s) de R$ 100.00\n",nota);

	int_n%=10000;
	nota=int_n/5000;
	printf("%d nota(s) de R$ 50.00\n",nota);

	int_n%=5000;
	nota=int_n/2000;
	printf("%d nota(s) de R$ 20.00\n",nota);

	int_n%=2000;
	nota=int_n/1000;
	printf("%d nota(s) de R$ 10.00\n",nota);

	int_n%=1000;
	nota=int_n/500;
	printf("%d nota(s) de R$ 5.00\n",nota);

	int_n%=500;
	nota=int_n/200;
	printf("%d nota(s) de R$ 2.00\n",nota);


	printf("MOEDAS:\n");

	int_n%=200;
	nota=int_n/100;
	printf("%d moeda(s) de R$ 1.00\n",nota);

	int_n%=100;
	nota=int_n/50;
	printf("%d moeda(s) de R$ 0.50\n",nota);

	int_n%=50;
	nota=int_n/25;
	printf("%d moeda(s) de R$ 0.25\n",nota);

	int_n%=25;
	nota=int_n/10;
	printf("%d moeda(s) de R$ 0.10\n",nota);

	int_n%=10;
	nota=int_n/5;
	printf("%d moeda(s) de R$ 0.05\n",nota);

	int_n%=5;
	printf("%d moeda(s) de R$ 0.01\n",int_n);

	return 0;
}