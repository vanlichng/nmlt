#include <iostream>
using namespace std;
int main() {
	int chieudai, chieurong;
	cout << "Nhap vao chieu dai hinh chu nhat : ";
	cin >> chieudai;
	cout << "Nhap vao chieu rong hinh chu nhat : ";
	cin >> chieurong;
	for (int i = 1; i <= chieurong; i++) {
		for (int j = 1; j <= chieudai; j++) {
			cout << "*" << " ";
		}
		cout << endl;
	}
	return 0;
}