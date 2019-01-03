#include <stdio.h>
#include<conio.h>

int main()
{
    printf("PROGRAM MENCARI BILANGAN TERBESAR DARI 3 BILANGAN\n");
    printf("BY M Achmad Sahroni NIM 311620782\n");
    printf("KAMPUS PELITA BANGSA. TEKNIK INFORMATIKA\n\n");
	int n1,n2,n3,max=0;
	printf("masukan nilai1 :");
	scanf("%d",&n1);
	printf("masukan nilai2 :");
	scanf("%d",&n2);
	printf("masukan nilai3 :");
	scanf("%d",&n3);
	max=n1;
	if(max<n2)
	max=n2;
	if(max<n3)
	max=n3;
	printf("bilangan terbesar :%d",max);
	getch();
	return 0;
}
