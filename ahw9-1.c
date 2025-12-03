#include <stdio.h>
#include <math.h>

int main(void)
{
	int c[3];
	int bl[3]={0,0,0};
	int r[3]={255,0,0};
	int g[3]={0,255,0};
	int b[3]={0,0,255};
	int w[3]={255,255,255};
	double dis_bl, dis_r, dis_g, dis_b, dis_w, min;
	
	scanf("%d", &c[0]);
	scanf("%d", &c[1]);
	scanf("%d", &c[2]);
	
	dis_bl=sqrt((pow((c[0]-bl[0]),2))+(pow((c[1]-bl[1]),2))+(pow((c[2]-bl[2]),2)));
	dis_r=sqrt((pow((c[0]-r[0]),2))+(pow((c[1]-r[1]),2))+(pow((c[2]-r[2]),2)));
	dis_g=sqrt((pow((c[0]-g[0]),2))+(pow((c[1]-g[1]),2))+(pow((c[2]-g[2]),2)));
	dis_b=sqrt((pow((c[0]-b[0]),2))+(pow((c[1]-b[1]),2))+(pow((c[2]-b[2]),2)));
	dis_w=sqrt((pow((c[0]-w[0]),2))+(pow((c[1]-w[1]),2))+(pow((c[2]-w[2]),2)));
	
	min=dis_bl;
	if (min>dis_r)
	{
		min=dis_r;
	}
	if (min>dis_g)
	{
		min=dis_g;
	}
	if (min>dis_b)
	{
		min=dis_b;
	}
	if (min>dis_w)
	{
		min = dis_w;
	}
	
	if (min == dis_bl)
	{
		printf("The nearest color is Black\n");
	}
	if (min == dis_r)
	{
		printf("The nearest color is Red\n");
	}
	if (min == dis_g)
	{
		printf("The nearest color is Green\n");
	}
	if (min == dis_b)
	{
		printf("The nearest color is Blue\n");
	}
	if (min == dis_w)
	{
		printf("The nearest color is White\n");
	}
	return 0;
}


