#include <stdio.h>
#include <conio.h>

int main()
{
	int n;

	// n >= 1
	do{
		printf("\nNhap vao n(n >= 1) = ");
		scanf("%d", &n);

		if(n < 1)
		{
			printf("\nGia tri n khong hop le. Xin kiem tra lai !");
		}
	}while(n < 1);

	int a1 = 1, a2 = 1;
	
	// 1 1 2 3 5 8 13 21 ...
	// 1 1 2 3 5
	if(n == 1)
	{
		printf("%d", a1);
	}
	else if(n == 2)
	{
		printf("%d %d", a1, a2);
	}
	else // n >= 3
	{
		printf("%d %d", a1, a2);

		// n = 3 => lap 1 lan de tim ra a3
		// n = 4 => lap 2 lan de tim ra a4
		// n = 5 => lap 3 lan de tim ra a5

		for(int i = 1; i <= n - 2; i++)
		{
			int an = a1 + a2;
			a1 = a2;
			a2 = an;
			printf(" %d ", an);
		}
	}


	getch();
	return 0;
}