#include "thuvien.h"
int main() {
    int a[1000], n;
    cout << "Nhap so phan tu ma ban muon co trong mang : ";
    cin >> n;
    nhapphantuMang(a, n);
    cout << "Gia tri nho nhat trong mang la : ";
    snn(a, n);
    cout << "Gia tri sau sap xep tu nho den lon : ";
    sapxep(a, n);
    inMang(a, n);
    cout << "Gia tri sau khi da sap xep tu lon den be : ";
    sapxeplonnho(a, n);
    inMang(a, n);
    return 0;
}