#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int point() {

	int a, b, c, s,n=0;
	int max[3]= {30,30,40};
	printf("Enter  Accumulated score , midterm score, final score : ");
	for (int i = 0; i < 3; i++) {
		scanf("%d", &s);
		if (s >= 0 && s <= max[i])
			n += s;
		else
			return -1;

	}
	printf(" -->  ALL Score %d ", n);
	return n;
}

int main2() {
	
	int S = point();
	if (S > 100||S<0)
		printf("\nERORR");
	else if (S >= 80)
		printf("-->\tA");
	else if (S >= 75)
		printf("-->\tB+");
	else if (S >= 70)
		printf("-->\tB");
	else if (S >= 65)
		printf("-->\tC+");
	else if (S >= 60)
		printf("-->\tC");
	else if (S >= 55)
		printf("-->\tD+");
	else if (S >= 50)
		printf("-->\tD");
	else if (S >= 0)
		printf("-->\tF");
	
	return 0;
}