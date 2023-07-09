#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int n;

	do{
		printf("\nNhap vao n (n > 0): ");
		scanf("%d", &n);

		if(n <= 0)
		{
			printf("\nGia tri n khong hop le. Xin kiem tra lai !");
		}
	}while(n <= 0);

	int Temp = n; // luu bien phu
	int sodaonguoc = 0;

	int dem = log10((double)Temp);

	while(Temp != 0)
	{
		int chuso = Temp % 10;
		Temp /= 10;

		sodaonguoc += chuso * pow(10.0, dem--);
	}

	//printf("\nSo dao nguoc cua %d la %d", n, sodaonguoc);

	if(n == sodaonguoc)
	{
		printf("\nLa so doi xung");
	}
	else
	{
		printf("\nKhong phai la so doi xung");
	}

	// kiểm tra chính phương
	if(sqrt((double)n) == (int)sqrt((double)n))
	{
		printf("\nLa so chinh phuong");
	}
	else
	{
		printf("\nKhong phai la so chinh phuong");
	}

/* 
Số nguyên tố là số bắt đầu từ 2 và chỉ có chia hết duy
nhất cho 1 và chính nó

có rất nhiều cách giải từ cách dở nhất đến cách hay nhất

GIẢI THUẬT & LẬP TRÌNH CỦA THẦY LÊ MINH HOÀNG

*/
/* 
Cách 1: Ta đi theo đúng định nghĩa của số nguyên tố là
chỉ chia hết cho 1 và chính nó, thành ra
nếu trong đoạn từ 2 cho tới nhỏ hơn nó
thì nó sẽ không chia hết cho số nào cả
vd: Số n

n sẽ gọi là nguyên tố nếu như trong đoạn
từ 2 --> n - 1 thì n không chia hết cho số
nào cả

vd: số 7 thì trong đoạn từ 2 --> 6 số 7
không chia hết cho số nào cả.
=> 7 là nguyên tố

vd: số 8 không gọi là nguyên tố vì chia 
hết cho 2, 4

Cách chứng minh 1: Cho vòng lặp for chạy
từ 2 --> n - 1. Nếu gặp 1 số nào bất kỳ
mà n chia hết cho nó => không thỏa là nguyên
tố


*/
	if(n < 2)
	{
		printf("\nKhong phai la nguyen to");
	}
	else
	{
		int Check = 1; // true
		int solanchaycach1 = 1;
		for(int i = 2; i < n; i++)
		{
			if(n % i == 0)
			{
				Check = 0; // false
				break; // thoát ra
			}
			solanchaycach1++;
		}
		printf("\nCach 1 chay het %d lan", solanchaycach1);
		if(Check == 1)
		{
			printf("\nCach 1: La so nguyen to");
		}
		else
		{
			printf("\nCach 1: Khong phai la so nguyen to");
		}
	}

	/* 
Cách 2: Ta thấy 1 số n sẽ không thể nào chia hết
cho các số trong đoạn từ n/2 + 1 cho tới n - 1

=> cải tiến lại cách 1: ta chỉ cần chạy vòng lặp
xét các số chia hết từ 2 tới n/2 là đc rồi
	*/
	if(n < 2)
	{
		printf("\nKhong phai la nguyen to");
	}
	else
	{
		int Check = 1; // true
		int solanchaycach2 = 1;
		for(int i = 2; i <= n / 2; i++)
		{
			if(n % i == 0)
			{
				Check = 0; // false
				break; // thoát ra
			}
			solanchaycach2++;
		}
		printf("\nCach 2 chay het %d lan", solanchaycach2);
		if(Check == 1)
		{
			printf("\nCach 2: La so nguyen to");
		}
		else
		{
			printf("\nCach 2: Khong phai la so nguyen to");
		}
	}

/* 
Cách 3: Cải tiến lên từ cách 2, ta thấy không cần
phải chạy từ 2 cho tới n / 2 mà chỉ cần chạy cho tới 
sqrt(n) là được rồi (toán học chứng minh)
*/
	if(n < 2)
	{
		printf("\nKhong phai la nguyen to");
	}
	else
	{
		int Check = 1; // true
		int solanchaycach3 = 1;
		for(int i = 2; i <= sqrt((double)n); i++)
		{
			if(n % i == 0)
			{
				Check = 0; // false
				break; // thoát ra
			}
			solanchaycach3++;
		}
		printf("\nCach 3 chay het %d lan", solanchaycach3);
		if(Check == 1)
		{
			printf("\nCach 3: La so nguyen to");
		}
		else
		{
			printf("\nCach 3: Khong phai la so nguyen to");
		}
	}

	/* 
Cách 4: Cải tiến từ cách 3 và ta thấy một điều sau:
Số 2 là số nguyên tố chẵn duy nhất, ngoài ra không có
số chẵn nào ngoài số 2 mà là số nguyên tố
	*/

	int Check = 1; // true
	if(n < 2)
	{
		//printf("\nKhong phai la nguyen to");
		Check = 0;
	}
	else if(n > 2)
	{
		if(n % 2 == 0)
		{
			Check = 0;
		}
		else
		{
			int solanchaycach4 = 1;
			for(int i = 3; i <= sqrt((double)n); i += 2)
			{
				if(n % i == 0)
				{
					Check = 0; // false
					break; // thoát ra
				}
				solanchaycach4++;
			}
			printf("\nCach 4 chay het %d lan", solanchaycach4);
		}
		if(Check == 1)
		{
			printf("\nCach 4: La so nguyen to");
		}
		else
		{
			printf("\nCach 4: Khong phai la so nguyen to");
		}
	}

	// d: Kiểm tra tăng dần
	int temp = n;
	int CheckTang = 1; // cờ hiệu
	int CheckGiam = 1; // cờ hiệu

	// while(temp / 10 != 0)
	while(temp > 9)
	{
		int chuso1 = temp % 10; // 5
		temp /= 10;
		int chuso2 = temp % 10; // 4

		if(chuso1 <= chuso2)
		{
			CheckTang = 0;
			//break;
		}

		if(chuso1 >= chuso2)
		{
			CheckGiam = 0;
		}

	}
	if(CheckTang == 1)
	{
		printf("\nTang dan !");
	}
	else if(CheckGiam == 1)
	{
		printf("\nGiam dan !");
	}
	else
	{
		printf("\nKhong tang khong giam");
	}

	getch();
	return 0;
}