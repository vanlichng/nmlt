#include "thuvien.h"
int main() {
	int gt;
	cout << "\n Nhap vao gia tri can kiem tra : ";
	cin >> gt;
	if (kt_SCP(gt) == true) {
		cout << gt << " la so chinh phuong";
	}
	else {
		cout << gt << " khong phai la so chinh phuong";
	}
	return 0;
}