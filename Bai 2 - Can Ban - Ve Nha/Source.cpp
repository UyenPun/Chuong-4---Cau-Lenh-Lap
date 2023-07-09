#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
	int a, b;

	// a >= 0
	do{
		printf("\nNhap so nguyen duong a = ");
		scanf("%d", &a);

		if(a < 0)
		{
			printf("\nGia tri khong hop le. Xin kiem tra lai !");
		}
	}while(a < 0);

	// b > a
	do{
		printf("\nNhap vao b = ");
		scanf("%d", &b);

		if(b <= a)
		{
			printf("\nGia tri b phai > a.  Xin kiem tra lai !");
		}
	}while(b <= a);

	int tongdoixung = 0;
	int demdoixung = 0;

	int tongchinhphuong = 0;
	int demchinhphuong = 0;

	int tongnguyento = 0;
	int demnguyento = 0;

	// mỗi lần lặp xét i
	for(int i = a; i <= b; i++)
	{
		int Temp = i; // luu bien phu
		int sodaonguoc = 0;

		int dem = log10((double)Temp);

		while(Temp != 0)
		{
			int chuso = Temp % 10;
			Temp /= 10;

			sodaonguoc += chuso * pow(10.0, dem--);
		}

		//printf("\nSo dao nguoc cua %d la %d", n, sodaonguoc);

		if(i == sodaonguoc)
		{
			//printf("\nLa so doi xung");
			demdoixung++;
			tongdoixung += i;
		}

		// kiểm tra chính phương
		if(sqrt((double)i) == (int)sqrt((double)i))
		{
			//printf("\nLa so chinh phuong");
			demchinhphuong++;
			tongchinhphuong += i;
		}

		// kiểm tra nguyên tố
		int Check = 1; // true
		if(i < 2)
		{
			//printf("\nKhong phai la nguyen to");
			Check = 0;
		}
		else if(i > 2)
		{
			if(i % 2 == 0)
			{
				Check = 0;
			}
			else
			{
				//int solanchaycach4 = 1;
				for(int j = 3; j <= sqrt((double)i); j += 2)
				{
					if(i % j == 0)
					{
						Check = 0; // false
						break; // thoát ra
					}
					//solanchaycach4++;
				}
				//printf("\nCach 4 chay het %d lan", solanchaycach4);
			}
			if(Check == 1)
			{
				//printf("\nCach 4: La so nguyen to");
				demnguyento++;
				tongnguyento += i;
			}	
		}
	}
	printf("\nSo luong cac so nguyen to la: %d", demnguyento);
	printf("\nSo luong cac so chinh phuong la: %d", demchinhphuong);
	printf("\nSo luong cac so doi xung la: %d", demdoixung);

	printf("\nTong nguyen to la: %d", tongnguyento);
	printf("\nTong doi xung la: %d", tongdoixung);
	printf("\nTong chinh phuong la: %d", tongchinhphuong);


	getch();
	return 0;
}