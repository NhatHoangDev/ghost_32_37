#include<stdio.h>
int main(){
	int a,b,c;
	do{
		printf("nhap a b c\n");
		scanf("%d %d %d",&a,&b,&c);
	}
	while(a+b<=c || a+c<=b || b+c<=a);
	printf("ba so la ba canh cua tam giac");

	return 0;
}
