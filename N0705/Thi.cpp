#include<stdio.h>

int main(void)
{
	int a[3];
	printf("Nhap 3 so :\n");
		for(int i=0;i<3;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("\nba so do la:");
			for(int i=0;i<3;i++)
			{
				printf("\n%4d",a[i]);
			}
	int max = a[0];
	for(int i=0;i<3;i++)
	{
			if( max < a[i])
			{
				max = a[i];
			}
	}
	printf("\nGia tri lon nhaHJDHFHDFJFJt la : %d",max);
	return 0;
}
