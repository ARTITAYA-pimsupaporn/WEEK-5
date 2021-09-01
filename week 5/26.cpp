#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * 
//เป็นรูปผีเสื้อที่มีขนาดของปีกแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง(Level 3)
int main() {
	int a;
	scanf("%d",&a);
	for (int y = 1; y < a * 2; y++) {
		for (int x = 1; x < a * 2; x++) {
			/*printf("(%d,%d) ", x, y);*/
			if (x > y && (x != a || y != a) && x <= a) {
				printf(" ");
			}
			else if (x + y < (a * 2) && y<a && x > a) {
				printf(" ");
			}
			else if (x + y >= (a * 2) + 1 && x <= a) {
				printf(" ");
			}
			else if (y-x >=1 && y>a && x > a) {
				printf(" ");
			}
			else
				printf("*");
		}
		printf("\n");
	}



	return 0;
}
