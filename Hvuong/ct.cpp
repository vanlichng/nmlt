#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Nhap vao chieu dai canh : ";
	cin >> n;
	for (int i = 1; i <= n; i++) {     // --> vong lap nay giup kiem soat hang cuaa hinh vuong
		for (int j = 1; j <= n; j++) {     // --> vong lap nay giup kiem soat so luong dau * cua tung hang
			cout << "*" << " ";
		}
		cout << endl;
	}
}