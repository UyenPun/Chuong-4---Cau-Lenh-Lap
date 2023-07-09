/*
a. 
S = 1 + 2 + 3 + ... + n

n = 1 => S(1) = 1
n = 2 => S(2) = 1 + 2 = S(1) + 2 = 3
n = 3 => S(3) = 1 + 2 + 3 = S(2) + 3 = 6
n = 4 => S(4) = S(3) + 4

công thức tổng quát:
S(n) = S(n - 1) + n

*/
#include <stdio.h>
#include <conio.h>

int main()
{
	int n;

	// n >= 1
	do{
		printf("\nNhap vao n (n >= 1): ");
		scanf("%d", &n);

		if(n < 1)
		{
			printf("\nGia tri n phai >= 1. Xin kiem tra lai !");
		}
	}while(n < 1);

	// a. 1 + 2 + 3 + ... + n
	/* 
	n = 3
lần chạy thứ 1: i = 1 => Sa = ? + 1 = 1
lần chạy thứ 2: i = 2 => Sa = 1 + 2 = 3
lần chạy thứ 3: i = 3 => Sa = 3 + 3 = 6
	*/
	/*for(int i = 1; i <= n; i++)
	{
		Sa = Sa + i;
	}*/
	
	//int i = 1;
	//while(i <= n)
	//{
		/* 
		cách 1:
		Sa = Sa + i;
		i++

		cách 2:
		Sa += i;
		i++;

		cách 3:
		Sa += i++;
		*/
		//Sa += i++;	
	//}

	/*int i = 1;
sondeptrai:
	Sa += i;

	if(i < n)
	{
		i++;
		goto sondeptrai;
	}*/


	int Sa = 0;
	int Sb = 0;
	float Sc = 0;
	int Sd = 1;
	int Tich = 1;
	int Se = 0;
	for(int i = 1; i <= n; i++)
	{
		Sa = Sa + i;
		Sb = Sb + i * i;
		Sc = Sc + 1.0 / i;
		Sd = Sd * i;
		Tich *= i;
		Se += Tich;
	}
	printf("\nSa = %d", Sa);
	printf("\nSb = %d", Sb);
	printf("\nSc = %f", Sc);
	printf("\nSd = %d", Sd);
	printf("\nSe = %d", Se);
	
	/* 
e. 1! + 2! + 3! + ... + n!
<=> 1 + 1*2 + 1*2*3 + 1*2*3*4 + ... 1*2*3*...*n
S(3) = 1 + 1*2 + 1*2*3
	*/

	

	/*
n = 3
i = 1 => Tich = 1, j = 1, Tich = 1 * 1 = 1 => Se = 0 + 1 = 1
i = 2 => Tich = 1, j = 1, 2 => Tich = 1 * 2 = 2 => Se = 1 + 2 = 3
i = 3 => Tich = 1, j = 1,2,3 => Tich = 1*2*3 = 6 => Se = 3 + 6 = 9
	*/
	/*for(int i = 1; i <= n; i++)
	{
		int Tich = 1;
		for(int j = 1; j <= i; j++)
		{
			Tich *= j;
		}
		Se += Tich;
	}*/

/* 
n = 3
i = 1 => Tich = 1 => Se = 0 + 1 = 1
i = 2 => Tich = 1 * 2 = 2 => Se = 1 + 2 = 3
i = 3 => Tich = 2 * 3 = 6 => Se = 3 + 6 = 9
*/
	getch();
	return 0;
}
