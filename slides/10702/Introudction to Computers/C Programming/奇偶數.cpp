#include <stdio.h>

int main()
{
	while(1){
	
		int a;
		printf("�п�J0-10�������Ʀr:");
		scanf("%d",&a);
		
		if(a>10 || a<0)
			break;
			//printf("%d �W�X�d��\n", a);
		else if(a%2==0)
			printf("%d �O����\n", a);
		else
			printf("%d �O�_��\n", a);
			
	}
	return 0;
} 
