#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "\n Nhap vao chieu dai canh cua hinh vuong : ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n) {
				cout << "*" << " ";
			}
			else {
				cout << "  ";   //--> phai co hai khoang chan moi du 1 dau *
			}
		}
		cout << endl;
	}
	return 0;
}