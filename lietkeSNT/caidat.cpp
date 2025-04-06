#include "thuvien.h"
bool lietke_SNT(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			s = s + 1;
		}
	}
	return s == 2;
}