#include <stdio.h>

main()
{
	int i=0;
	while(i<9)
	{
	    printf("hello\n");
	    i=i+1;
	}
	
	i=0;
	while(i<15)
	{
	    printf("%i\n",i);
	    i=i+1;
	}
	
	i=0;
	while(i<15)
	{
	    if(i%2==1)
	    {
	    	printf("%i\n",i);
		}
		
	    i=i+1;
	}
	
	int sum=0;
	i=5;
	while (i<16)
	{
		sum=sum+i;
		i=i+1;
	}
	printf("%d",sum);
}

