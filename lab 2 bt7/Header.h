#include<iostream>
using namespace std;
const int MAX = 100;
struct DaySo{
	int a[MAX];
	int n;
};

void nhapDanhSach(DaySo& ds);
void xuatDanhSach(DaySo ds);
int soLuongPhanTuX(DaySo ds, int x);
void xuatViTriGiaTriX(DaySo ds, int x);
