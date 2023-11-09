#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cout << "Nhap so nguyen a: ";
    cin >> a;
    cout << "Nhap so nguyen b: ";
    cin >> b;

    int tong = 0;
    cout << "Cac so le trong khoang [" << a << ", " << b << "] la: ";
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            tong += i;
        }
    }
    cout << "\nTong cac so le trong khoang [" << a << ", " << b << "] la: " << tong << endl;
    return 0;
}
