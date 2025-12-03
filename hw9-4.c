#include <stdio.h>

int main(void)
{
	int r,g,b;
	int first, second;
	double div, fraction;
	char r1,r2,g1,g2,b1,b2;
	
	scanf("%d", &r);
	scanf("%d", &g);
	scanf("%d", &b);
	
	div = r/16.0;
	first = (int) div;
	fraction = div - first;
	second = (int) (fraction*16);
	
	if (first<10)
	{
		r1='0'+ first;
	}
	else
	{
		r1 = 'A' + (first-10);
	}
	if (second <10)
	{
		r2='0'+second;
	}
	else 
	{
		r2= 'A' + (second-10);
	}
	
	div = g/16.0;
	first = (int) div;
	fraction = div - first;
	second = (int) (fraction*16);
	
	if (first<10)
	{
		g1='0'+ first;
	}
	else
	{
		g1 = 'A' + (first-10);
	}
	if (second <10)
	{
		g2='0'+second;
	}
	else 
	{
		g2= 'A' + (second-10);
	}
	
	div = b/16.0;
	first = (int) div;
	fraction = div - first;
	second = (int) (fraction*16);
	
	if (first<10)
	{
		b1='0'+ first;
	}
	else
	{
		b1 = 'A' + (first-10);
	}
	if (second <10)
	{
		b2='0'+second;
	}
	else 
	{
		b2= 'A' + (second-10);
	}
	
	printf("The hex code is #%c%c%c%C%c%C\n", r1,r2,g1,g2,b1,b2);
	return 0;
}


