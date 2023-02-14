#include <stdio.h>
main()
{
	int pin1,pin2;
	printf("pin1=");
	scanf("i,&pin1");
	printf("pin2=");
	scanf("%i,&pin2");
	
	if(((pin1==111)&&(pin2==333))||((pin1==444)&&(pin2==666)))
	{
		printf("OK");
	}
	else
	{
		printf("Error");
	}
}
