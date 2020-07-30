#include <stdio.h>
#include <string.h>
char kiemtra(char chuoi[100], char n)
{
    int i, dem = 0;
    for (i = 0; i < strlen(chuoi); i++)
    {
        if (('a' <= chuoi[i]) && (chuoi[i]<='z'))
        {
            dem++;
        }
    }
    printf("\nCo %d chu cai viet thuong.\n",dem);
}
char chuhoa(char chuoi[100], char n)
{
    int dem1=0,i;
    for ( i = 0; i < strlen(chuoi); i++)
    {
        if (('A' <= chuoi[i]) && (chuoi[i]<='Z'))
        {
            dem1++;
        }
    }
    printf("Co %d chu cai viet hoa.\n",dem1);
}
char chuso(char chuoi[100], char n)
{
    int dem2=0,i;
    for (i = 0; i < strlen(chuoi); i++)
    {
        if (('0' <= chuoi[i]) && (chuoi[i]<='9'))
        {
            dem2++;
        }
    }
    printf("Co %d chu so.\n",dem2);
}
int kiemtratu(char chuoi[])
{
    int i=0;
    for(i=0;chuoi[i]!='\0';i++);
    return i;
}
int main()
{
    char chuoi[100], n;
    int dem = 0;
    printf("nhap chuoi: ");
    gets(chuoi);
    printf("chuoi vua nhap la : %s", chuoi);
    kiemtra(chuoi,n);
    chuhoa(chuoi,n);
    chuso(chuoi,n);
    printf("Co tat ca %d ky tu.",kiemtratu(chuoi));
    return 0;   
}
