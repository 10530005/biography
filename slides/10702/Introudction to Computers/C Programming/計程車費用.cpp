#include <stdio.h>

int main()
{
    int taxi_dist, price;
   
    printf("�п�J���{�� -> ");
    scanf("%d", &taxi_dist);
    
	if (taxi_dist>=0 && taxi_dist<=5000)
    {
        if (taxi_dist >= 1500)
        {
           price = 70 + 5*(taxi_dist-1500)/500;
           
		   if ((taxi_dist-1500)%500 != 0)
              price += 5;
        }
        else
           price = 70;
        
		printf("����O%d��\n",price);
    }
    else
       printf("�п�J0-5000���Z���d��!\n");    
    
    return 0;
}
