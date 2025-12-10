#include<stdio.h>

main(){
	int item1,item2,item3;
	float price1,price2,price3,vat1,vat2,vat3;
	
	scanf("%d",&item1);
	price1 = item1 * 0.95;
	vat1 = price1*1.07;
	printf("%.2f\n",vat1);
	
	scanf("%d",&item2);
	price2 = (item2+item1) * 0.85;
	vat2 = price2*1.07;
	printf("%.2f\n",vat2);
	
	scanf("%d",&item3);
	price3 = (item2+item1+item3) * 0.70;
	vat3 = price3*1.07;
	printf("%.2f",vat3);
}