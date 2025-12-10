#include <stdio.h>

int main() {
	int mid,final,q1,q2,lab,sit;
	float mid1,final1,q11,q21,lab1,sit1,total;

	scanf("%d %d %d %d %d %d", &mid,&final,&q1,&q2,&lab,&sit);

	mid1 = mid * 30.0/100.0;
	final1 = final * 35.0/120.0;
	q11 = q1 * 12.0/60.0;
	q21 = q2 * 13.0/60.0;
	lab1 = lab * 5.0/16.0;
	sit1 = sit * 5.0/16.0;

	total = mid1 + final1 + q11 + q21 + lab1 + sit1;

	printf("%10s = %4d => %8.4f\n", "Mid", mid, mid1);
	printf("%10s = %4d => %8.4f\n", "Final", final, final1);
	printf("%10s = %4d => %8.4f\n", "Q1", q1, q11);
	printf("%10s = %4d => %8.4f\n", "Q2", q2, q21);
	printf("%10s = %4d => %8.4f\n", "Lab", lab, lab1);
	printf("%10s = %4d => %8.4f\n", "Sit",sit, sit1);
	printf("Total score = %.4f\n", total);

return 0;
}