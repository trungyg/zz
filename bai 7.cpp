#include "bits/stdc++.h"
using namespace std;
int a[100];
int n=10;
int b[100];
int c[100];
int nhapdayso(){
for(int i=0;i<n;++i){
    cout<<"a["<<i<<"]=";
    cin>> a[i];
    if (a[i]==0)
        break;
}
}
int sapxepdayso(){
for(int i = 0; i < n; i++)
        if(a[i] % 2 == 0) {
        b[i]=a[i];
        cout<<b[i]<<" ";
        }
cout<<"0"<<" ";
for(int i = 0; i < n; i++)
        if(a[i] % 2 != 0){
        c[i]=a[i];
        cout<<c[i]<<" ";
}
cout<<endl;
}
bool laSoNguyenTo(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}







int main (){

nhapdayso();
sapxepdayso();
int n;
    cout << "Nhap so can kiem tra: ";
    cin >> n;
    if (laSoNguyenTo(n)) {
        cout << n << " la so nguyen to.";
    } else {
        cout << n << " khong phai la so nguyen to.";
    }



}
