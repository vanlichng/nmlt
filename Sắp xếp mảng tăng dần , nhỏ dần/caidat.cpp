#include "thuvien.h"
void nhapphantuMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap vao phan tu thu " << i + 1 << " : ";
		cin >> a[i];
	}
}
void snn(int a[], int n) {
	int min = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
	}
	cout << min;
}
void sapxep(int a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[i]) {
			int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void inMang(int a[],int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}
void sapxeplonnho(int a[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] > a[i]) {
				int max = a[i]; //khoi tao gia tri max tai vi tri bat dau cua mang 
				a[i] = a[j];    //neu gia tri tiep theo lon hon gia tri khoi tao thi gia tri do se swap cho max da khoi tao ban dau
				a[j] = max;
			}
		}
	}
}