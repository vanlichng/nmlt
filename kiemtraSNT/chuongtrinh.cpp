#include "thuvien.h"
int main() {
	int n;
	cout << "Nhap vao gia tri nguyen duong : ";
	cin >> n;
	if (kt_SNT(n) == 1) {
		cout << n << " la so nguyen to";
	}
	else {
		cout << n << " khong phai la so nguyen to ";
	}
}