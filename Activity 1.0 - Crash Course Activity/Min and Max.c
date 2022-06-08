#include <stdio.h>

int main()
{

	int i,max,min,x;
	for(i=1;i<=10;i++)
	{
		printf("[%d]Enter Integers: ",i);
		scanf("%d",&x);
		if(max < x)
			max = x;
        if (max<=0)
            max = x;
		if(min > x)
			min = x;
		if (min<=0)
		    min= x;
		if (x<=0)
		{printf("Invalid input. Pleae try again!\n");
		   i--;
		}
	}
	printf("\n max = %d",max);
	printf("\n min = %d",min);
	return 0;
}
