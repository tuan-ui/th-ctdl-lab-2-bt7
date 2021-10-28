#include"Header.h"

void nhapDanhSach(DaySo& ds) {
	cout << "\nNhap so phan tu n: ";
	cin >> ds.n;
	for (int i = 0; i < ds.n; i++)
	{
		cout << "Nhap phan tu thu " << i + 1<<" : ";
		cin >> ds.a[i];
	}
}

void xuatDanhSach(DaySo ds){
	cout << "Xuat danh sach day so: ";
	for (int i = 0; i < ds.n; i++)
		cout << ds.a[i] << " ";
}

int soLuongPhanTuX(DaySo ds, int x){
	int k = 0;
	for (int i = 0; i < ds.n; i++)
		if (ds.a[i] == x)
			k++;
	return k;
}

void xuatViTriGiaTriX(DaySo ds, int x){
	for (int i = 0; i < ds.n; i++)
		if (ds.a[i] == x)
			cout << i + 1 << " ";
}