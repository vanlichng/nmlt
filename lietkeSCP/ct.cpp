#include "tv.h"
int main() {
	int gt;
	cout << "\n Nhap vao gia tri gioi han : ";
	cin >> gt;
	for (int i = 1; i < gt; i++) {
		if (lk_SCP(i) == true) {      //  1 van la so chinh phuong
			cout << i << " ";
		}
	}
	return 0;
}