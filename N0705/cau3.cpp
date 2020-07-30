#include <conio.h>
#include <stdio.h>
#include <string.h>
typedef struct {
    char gioitinh[3], hoten[20];
    char masv[5];
    char dtb[5];
    float diem1, diem2, diem3;
} Thisinh;
typedef Thisinh Mang[100];
void nhap(Mang m, int &n){
    int i;
    float tg;
    printf("Bao nhieu thi sinh: ");
    scanf("%d", &n);
    for (i=0; i<n; i++){
        fflush(stdin);
        printf("masv [%d]\n", i+1);
        printf("Ma SV: ");
        gets(m[i].masv);
        fflush(stdin);
        printf("Ho ten: ");
        gets(m[i].hoten);
        fflush(stdin);
        printf("Gioi tinh : ");
        gets(m[i].gioitinh);
        printf("Diem 1:");
        scanf("%f", &tg);
        m[i].diem1=tg;
        printf("Diem 2:");
        scanf("%f", &tg);
        m[i].diem2=tg;
        printf("Diem 3:");
        scanf("%f", &tg);
        m[i].diem3=tg;
    }
}
   float dtb;
   int i;
   //dtb = (m[i].diem1 + m[i].diem2 + m[i].diem)/3;
   //printf("dien trung binh la : %f ",&dtb);
//   if(dtb>=5){
//   	printf("sinh vien do la : ")
//   }
void hien(Mang m, int n){
    for (int i=0; i<n; i++){
    	dtb = (m[i].diem1 + m[i].diem2 + m[i].diem)/3;
        printf("\n %5s%20s%3s%5.1f%5.1f%5.1f",m[i].masv, m[i].hoten, m[i].gioitinh , m[i].diem1, m[i].diem2, m[i].diem3);
    }
}
int main(void){
    Mang a;
    int n, i;
    nhap(a, n);
    hien(a, n);
    return 0;
}
