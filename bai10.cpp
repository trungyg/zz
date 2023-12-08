#include<bits/stdc++.h>
using namespace std;
FILE *f;

struct thisinh{
char sbd [10];
 char hoten [30];
 char gt [5];
 char tietmuc [20];
 char kq [5];
void in(){
    cout << "-------------------------------------------------------------------------- \n";
    cout << "So bao danh:" << sbd << endl;
    cout << "Ho ten:" << hoten << endl;
    cout << "Gioi tinh:" << gt << endl;
    cout << "Ten tiet muc du thi:" << tietmuc << endl;
    cout << "Ket qua:" << kq << endl;
}

    void nhap(){
        cout << "Nhap so bao danh:"; cin.getline(sbd,10);

        cout << "Nhap ho ten:"; cin.getline(hoten,30);

        cout << "Nhap gioi tinh:"; cin.getline(gt,5);

        cout << "Nhap tiet muc du thi"; cin.getline(tietmuc,20);

        cout << "Nhap ket qua:"; cin.getline(kq,5);
    }

};

 void inds(thisinh a[],int n){
    cout <<" Thong tin sinh vien:\n";
    for (int i=0;i<n;++i)
        a[i].in();
    }

void trungten(thisinh a[], int n){
 cout << "Các thí sinh có tiet muc trùng tên \n";
 for(int i=0; i<n-1; i++)
 {
 for(int j=i+1; j<n; j++)
 {
 if(strcmp(a[i].tietmuc,a[j].tietmuc)==0)
 {
 a[i].in();
 a[j].in();
 }
 }
 }
}
void ghifile(thisinh a[], int n){
 cout <<"thong tin thi sinh dat vong loai \n";

 f = fopen("ketqua.dat","wt");
 if(f==NULL){
 cout << "\n Loi ghi tep";
 return;
 }
 for(int i=0; i<n;++i){
 if(strcmp(a[i].kq,"d")==0)
 {
 fwrite(&a[i],sizeof(thisinh),1,f);
 a[i].in();
 }
 }
 fclose(f);
}
void sapxep(thisinh a[], int n){
 cout <<"sap xep ds thí sinh theo theo anphabet \n" ;
thisinh tg;
 for(int i=0; i<n-1; i++)
 {
 for(int j = 1; j<n; j++)
 {
 if(strcmp(a[i].hoten,a[j].hoten)>0)
 {
 tg = a[i];
 a[i] = a[j];
 a[j] = tg;
 }
 }
 }
 for(int i=0; i<n; i++)
 {
 a[i].in();
 }
}


int main (){

    thisinh a[1000];
    int n=0;
    while(1){
        cout <<"----------------menu-----------------------\n";
        cout <<"1 Nhap thong tin sinh vien \n";
        cout <<"2 Hien thi toan bo danh sach sinh vien\n";
        cout <<"3 Hien thi sinh trung tiet muc\n";
        cout <<"4.Sap xep ds thi sinh theo thu tu anphabet cua ten \n";
        cout <<"5.In thi sinh dat vong loai va ghi vao file \n";
        int lc; cin >> lc;
        cin.ignore();
        if (lc ==1){
            a[n].nhap();
            ++n;
        }
        else if(lc ==2){
            inds(a, n);

        }
        else if (lc==3){
            trungten(a,n);
        }
        else if (lc==4){
            sapxep(a,n);
        }
        else if (lc==5){
            ghifile(a,n);
        }
        else if(lc==0){
            break;
        }


    }
    return 0;
}


