#include <stdio.h>
#include <conio.h>

int main()
{
	/* 
tìm các số có 2 chữ số: ab
sao cho: a * b == (a + b) * 2
	*/
for(int i = 10; i < 100; i++)
{
	int hangchuc = i / 10;
	int hangdonvi = i % 10;

	if(hangchuc * hangdonvi == 2 * (hangchuc + hangdonvi))
	{
		printf("%4d", i);
	}
}

	getch();
	return 0;
}