#include<bits/stdc++.h>
using namespace std;
struct canbo{
string ten,phongban;
float hesoluong;
int luongcb,luong;
void in(){
    cout << "-------------------------------------------------------------------------- \n";
    cout << "Ho ten:" << ten << endl;
    cout << "Phong ban:" << phongban << endl;
    cout << "He so luong:" << hesoluong << endl;
    cout << "Luong co ban:" << luongcb << endl;
    luong=luongcb*hesoluong;
    cout << "Luong " << luong << endl;
}

    void nhap(){
        cout << "Nhap Ho ten:"; getline (cin, ten);
        cin.ignore();
        cout << "Nhap Phong ban:"; getline(cin,phongban);
        cin.ignore();
        cout << "Nhap He so luong:"; cin >> hesoluong;
        cin.ignore();
        cout << "Nhap Luong co ban"; cin >>luongcb;

    }
void indspro(canbo a[],int n){
    cout <<" Thong tin can bo co he so luong >5.0:\n";
    for (int i=0;i<n;++i){
        if(hesoluong>5.0)
            a[i].in();
    }
}
};
 void inds(canbo a[],int n){
    cout <<" Thong tin can bo :\n";
    for (int i=0;i<n;++i)
        a[i].in();
    }

int main (){
    canbo a[1000];
    int n=0;
    int i;
    while(1){
        cout <<"----------------menu-----------------------\n";
        cout <<"1 Nhap thong tin can bo \n";
        cout <<"2 Hien thi toan bo danh sach can bo\n";
        cout <<"3 Hien thi toan bo danh sach can bo co he so luong >5.0\n";
        int lc; cin >> lc;
        if (lc ==1){
            a[n].nhap();
            ++n;
        }
        else if(lc ==2){
            inds(a, n);
        }
        else if(lc==3){
            a[i].indspro(a, n);
        }


        else if(lc==0){
            break;
        }


    }
    return 0;
}


