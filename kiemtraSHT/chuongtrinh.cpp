#include "thuvien.h"
int main() {
	int gt;
	cout << "\n Nhap vao gia tri : ";
	cin >> gt;
	if (kiemtra_SHT(gt) == 1) {
		cout << gt << " la so hoan thien ";
	}
	else {
		cout << gt << " khong la so hoan thien ";
	}
	return 0;
}