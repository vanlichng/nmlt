#include "thuvien.h"
int main() {
	int gt;
	cout << "\n Nhap vao gia tri : "; //ne dung do while
	cin >> gt;
	cout << "--> Cac so hoan thien be hon gia tri ban da nhap : ";
	for(int i = 2; i < gt; i++) {
		if (kiemtra_SHT(i)==true) { //kiem tra tung gia tri be hon gt da nhap roi in ra neu so do la so hoan thien
			cout << i << " ";
		}
	}
	cout << "Khong co so hoan thien nao"; //neu sau khi ket thuc for ma khong co so hoan thien nao thi se cout ra 
}