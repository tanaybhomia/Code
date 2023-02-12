#include <stdio.h>
#include <libgraph>
void main()
{
	int gd = DETECT,gm;
	initgraph(&gd,&gm,”c:\\TC\\BGI”);
	int xmax,ymax;
	xmax = getmaxx();
	ymax = getmaxy();
	line(xmax/2,0,xmax/2,ymax);
	line(0,ymax/2,xmax,ymax/2);
	getch();
	closegraph();
}

