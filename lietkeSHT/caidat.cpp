#include "thuvien.h"
bool kiemtra_SHT(int n) {
	int tong = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}
	return n == tong;
}