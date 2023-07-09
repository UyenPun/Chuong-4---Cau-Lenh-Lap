#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b; // khai báo

	do{
		printf("\nNhap vao so nguyen duong a = ");
		scanf("%d", &a);

		if(a < 0)
		{
			printf("\nGia tri a khong hop le. Xin kiem tra lai !");
		}
	}while(a < 0);

	do{
		printf("\nNhap vao so nguyen duong b = ");
		scanf("%d", &b);

		if(b < 0)
		{
			printf("\nGia tri b khong hop le. Xin kiem tra lai !");
		}
	}while(b < 0);

/*
số 4 chia hết cho các số: 1, 2, 4
số 6: chia hết cho các số: 1, 2, 3, 6
ý tưởng: ta sẽ đi xét từ số bé nhất và xét các số nó 
chia hết, lần lượt lấy từng số đó so sánh với thằng
lớn hơn, nếu thằng lớn hơn cũng chia hết => thỏa

lưu ý: xét từ số lớn về 1, ngay chỗ nào mà thỏa thì lập
tức dừng lại bởi vì đã đảm bảo là lớn nhất

*/

	int Min = a < b ? a : b;
	int Max = a > b ? a : b;

	int ucln;
	int solanlapcach1 = 0, solanlapcach2 = 0;

	if(Max % Min == 0)
	{
		ucln = Min;
	}
	else
	{
		for(int i = Min / 2; i >= 1; i--)
		{
			solanlapcach1++;
			if(Max % i == 0 && Min % i == 0)
			{
				ucln = i;
				break;
			}
		}
	}
	printf("\nCach 1: UCLN la: %d", ucln);

/*

Trên giang hồ có thuật toán sau: Xét cặp số a, b. Điều
kiện để lặp là a phải khác b.
Nếu a > b thì: a = a - b
Nếu b > a thì: b = b - a
Nếu a == b thì: dừng vòng lặp kết quả in ra ucln là a hay b
cũng như nhau vì lúc này chúng bằng nhau

a = 4
b = 6

đầu tiên: a khác b và ta thấy b > a
=> b = b - a
=> b = 6 - 4 = 2

lúc này: a = 2 & b = 4 ta lại thấy b > a
=> b = b - a
=> b = 4 - 2 = 2

lúc này a == b == 2 => ucln = 2

a = 19
b = 9

lần 1: 
a > b => a = a - b = 19 - 9 = 10
a = 10
b = 9

lần 2:
a > b => a = a - b = 10 - 9 = 1
a = 1
b = 9

*/

	while(a != b)
	{
		if(a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
		solanlapcach2++;
	}
	ucln = a; // hay ucln = b cũng được vì nó bằng nhau.

	printf("\nCach 2: UCLN la: %d", ucln);

	printf("\nCach 1 chay het %d lan", solanlapcach1);
	printf("\nCach 2 chay het %d lan", solanlapcach2);




	getch();
	return 0;
}