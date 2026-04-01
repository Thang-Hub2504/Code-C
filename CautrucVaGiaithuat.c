//viết chương trình nhập vào danh sách sinh viên
//thông tin sinh viên gồm: MSSV, hotensv, ngaysinh, điểm
//xuất ra màn hình dssv theo thứ tự giảm dần theo điểm 
//tìm sinh viên có học lực tốt nhất
//xuất ra màn hình

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef struct DATE{
    int ngay;
    int thang;
    int nam;
}DATE;

typedef struct Sinhvien{
    char mssv[9];
    char hotensv[30];
    struct DATE NTNS;
    int diemthi; 
}Sinhvien;

void Nhapsv(struct Sinhvien *x)
{
	printf("\nNhap vao ho ten: ");
	fgets(x->hotensv, sizeof(x->hotensv), stdin);
    x->hotensv[strcspn(x->hotensv, "\n")] = 0;
    printf("\nNhap vao ngay, thang, nam sinh: ");
    scanf("%d %d %d", &x->NTNS.ngay, &x->NTNS.thang, &x->NTNS.nam);
}

void Xuatsv(struct Sinhvien x) {
    printf("\nHo ten: %s", x.hotensv);
    printf("\nNgay sinh: %d/%d/%d", x.NTNS.ngay, x.NTNS.thang, x.NTNS.nam);
}

int main(){
    int n;
    printf("\nNhap so sinh vien: ");
    scanf("%d",&n);
    while(getchar() != '\n');
    for(int i=0; i<=n;i++){
    printf("\nNhap sinh vien thu %d:", i + 1);
    struct Sinhvien sv1;
    Nhapsv(&sv1);
    Xuatsv(sv1);
    }
    return 0;
}