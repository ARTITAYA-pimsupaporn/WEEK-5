#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//จงเขียนโปรแกรมรับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * 
//เป็นรูปผีเสื้อที่มีขนาดของปีกแต่ละข้างเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง(Level 3)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main1()
{
	int r, h, d, sp;					
	printf("Enter height: ");
	scanf("%d", &h);
	for (r = 1; r <= h - 1; r++)			//  upper half of butterfly
	{
		for (d = 1; d <= r; d++)
			printf("%d", d);
		for (sp = 1; sp <= 2 * (h - r); sp++)	//  ไม่มีปีกกาก็จะวนแค่คำสั่งแรก
			printf("*");
		printf("\b");
		for (d = r; d >= 1; d--)
			printf("%d", d);
		printf("\n");
	}
	for (r = h; r >= 1; r--)
	{
		for (d = 1; d <= r; d++)			//  lower half of butterfly.
			printf("%d", d);
		for (sp = 1; sp <= 2 * (h - r); sp++)
			printf("*");
		printf("\b");
		for (d = r; d >= 1; d--)
			printf("%d", d);
		printf("\n");
	}
	return 0;
}
