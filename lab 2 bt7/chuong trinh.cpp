#include"Header.h"

int main()
{
	int x,y;
	DaySo ds;
	nhapDanhSach(ds);
	xuatDanhSach(ds);
	cout << "\nNhap gia tri x de tim so luong: ";
	cin >> x;
	int i = soLuongPhanTuX(ds, x);
	if (i > 0)
		cout << "So luong phan tu x la: " << i;
	else
		cout << "Khong co phan tu x trong mang: ";
	cout << "\nNhap gia tri x de tim vi tri: ";
	cin >> y;
	cout << "\Xuat tat ca vi tri x la: ";
	xuatViTriGiaTriX(ds, y);

	cout << endl;
	system("pause");
	return 0;
}