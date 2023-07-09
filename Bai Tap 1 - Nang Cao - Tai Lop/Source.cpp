#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int n;

	do{
		printf("\nNhap vao so nguyen duong n = ");
		scanf("%d", &n);

		if(n < 0)
		{
			printf("\nGia tri n khong hop le. Xin kiem tra lai !");
		}
	}while(n < 0);

	// đếm số chữ số
	/*
lấy số đó liên tục chia cho 10, mỗi lần chia thì tăng
biến đếm lên, chia cho đến khi số đó là 0 thì dừng lại

vd: số n = 1234
1234 / 10 = 123 => dem = 1
123 / 10 = 12 => dem = 2
12 / 10 = 1 => dem = 3
1/ 10 = 0 => dem = 4


	*/
	int dem = 0;
	int temp = n; // tạo biến phụ temp lưu giá trị n sang
	//while(temp != 0)
	//{
	//	temp = temp / 10; // Liên tục chia n cho 10
	//	dem++;
	//}

	if(n == 0)
	{
		dem = 1;
	}
	else
	{
		dem = log10((double)n) + 1;
	}
	printf("\nSo %d co %d chu so", n, dem);

/*
1234 làm cách nào để ra được các chữ số: 1, 2, 3, 4

1234 % 10 = 4 (1)
1234/ 10 = 123

123 % 10 = 3 (2)
123 / 10 = 12

12 % 10 = 2 (3)
12 / 10 = 1

1 % 10 = 1 (4)
1 / 10 = 0 => dừng lại

*/
	int Max, Min;

	// 123 % 10 = 3
	Max = Min = temp % 10; // đặt max = min = số cuối
	temp /= 10; // bỏ số cuối

	while(temp != 0)
	{
		int chuso = temp % 10; // lấy chữ số cuối
		temp /= 10; // loại chữ số cuối đi

		if(chuso > Max)
		{
			Max = chuso;
		}

		if(chuso < Min)
		{
			Min = chuso;
		}
	}

	/* Nếu không đặt Max = Min = temp % 10 thì
đặt Max là chữ số nhỏ nhất để đảm bảo mọi chữ số 
khi lấy ra luôn > Max
và đặt Min là chữ số lớn nhất để đảm bảo mọi chữ số
khi lấy ra luôn < Min

Max = 0
Min = 9

7584

TÌM KIỂU LỚN NHẤT/BÉ NHẤT CỦA SỐ NGUYÊN
#include <limits.h>

INT_MAX => số lớn nhất của kiểu int
INT_MIN => số bé nhất của kiểu int

TÌM KIỂU LỚN NHẤT/BÉ NHẤT CỦA SỐ THỰC
#include <float.h>

FLT_MAX => kiểu float
FLT_MIN => kiểu float

DBL_MAX => kiểu double
DBL_MIN => kiểu double




	
	*/
	/*
5207

B1: Max = Min = 7
5207 = 10 = 520

520 % 10 = 0 => Min = 0, Max = 7
520 / 10 = 52

52 % 10 = 2 => Min = 0, Max = 7
52 / 10 = 5

5 % 10 = 5 => Min = 0, Max = 7
5 / 10 = 0 => điều kiện dừng




	*/

	printf("\nChu so Max: %d", Max);
	printf("\nChu so Min: %d", Min);


	getch();
	return 0;
}