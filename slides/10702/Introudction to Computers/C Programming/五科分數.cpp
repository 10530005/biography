#include <stdio.h>

int main()
{
	int a,b,c,d,e;
	
	printf("�п�J�ƾǦ��Z:");
	scanf("%d",&a);
	
	printf("�п�J�^�妨�Z:");
	scanf("%d",&b);  
	
	printf("�п�J��妨�Z:");
	scanf("%d",&c); 
	 
	printf("�п�J�a�z���Z:");
	scanf("%d",&d);  
	
	printf("�п�J���z���Z:");
	scanf("%d",&e);  
	
	int avg = (a+b+c+d+e)/5;
	printf("����: %d\n", avg);
	
	if(a<60)
		printf("�ƾǤ��ή�\n");
	if(b<60)
		printf("�^�夣�ή�\n");
	if(c<60)
		printf("��夣�ή�\n");
	if(d<60)
		printf("�a�z���ή�\n");
	if(e<60)
		printf("���z���ή�\n");
			
	if(a >= b && a >= c && a >= d && a >=e)
		printf("�ƾǬ��̰���\n");
	if(b >= a && b >=c && b >= d && b >=e)
		printf("�^�嬰�̰���\n");
	if(c >= a && c >= b && c >= d && c >=e)
		printf("��嬰�̰���\n");
	if(d >= a && d >= b && d >= c && d >=e)
		printf("�a�z���̰���\n");
	if(e >= a && e >= b && e >= c && e >=d)
		printf("���z���̰���\n");
	
	if(a <= b && a <= c && a <= d && a <=e)
		printf("�ƾǬ��̧C��\n");
	if(b <= a && b <=c && b <= d && b <=e)
		printf("�^�嬰�̧C��\n");
	if(c <= a && c <= b && c <= d && c <=e)
		printf("��嬰�̧C��\n");
	if(d <= a && d <= b && d <= c && d <=e)
		printf("�a�z���̧C��\n");
	if(e <= a && e <= b && e <= c && e <=d)
		printf("���z���̧C��\n");
	
	return 0;	
} 
