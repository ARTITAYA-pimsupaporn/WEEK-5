#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main4() {

	int a , b , c;
	printf("Enter  Accumulated score : ");
	scanf("%d", &a);
	if (a >= 0 && a <= 30) { a = a; }
	else { a = -1; }

	printf("Enter  midterm score : ");
	scanf("%d", &b);
	if (b >= 0 && b <= 30) { b = b; }
	else { b = -1; }

	printf("Enter  final score  : ");
	scanf("%d", &c);
	if (c >= 0 && a <= 30) { a = a; }
	else { c = -1; }
	

	if ( a > 0 && b > 0 && c > 0) {
		int S = a + b + c;
		printf("\n Gread = %d ", S);
		if (S > 100 || S < 0) { printf("\nERORR"); }
		else if (S >= 80) { printf("-->\tA"); }
		else if (S >= 75) { printf("-->\tB+"); }
		else if (S >= 70) { printf("-->\tB"); }
		else if (S >= 65) { printf("-->\tC+"); }
		else if (S >= 60) { printf("-->\tC"); }
		else if (S >= 55) { printf("-->\tD+"); }
		else if (S >= 50) { printf("-->\tD"); }
		else if (S >= 0) { printf("-->\tF"); }
	}
	else {
		printf(" ---> ERROR! \n");
	}
	return 0;
}