#include "thuvien.h"
int main() {
	int n;
	cout << "\n Nhap vao gia tri n : ";
	cin >> n;
	for (int i = 1; i < n; i++) { //de 1 hoac 2 deu duoc
		if (lietke_SNT(i) == true) {
			cout << i << " ";
		}
	}
}