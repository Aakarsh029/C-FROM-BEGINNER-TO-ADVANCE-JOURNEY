#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
int x,y,x_mid,y_mid,radius,dp;
int g_mode,g_driver=DETECT;
initgraph(&g_driver,&g_mode,NULL);
printf("*********** MID POINT Circle drawing algorithm ********\n\n");
printf("\nenter the coordinates= ");
scanf("%d %d",&x_mid,&y_mid);
printf("\n now enter the radius =");
scanf("%d",&radius);
x=0;
y=radius;
dp=1-radius;
do
{
putpixel(x_mid+x,y_mid+y,WHITE);
putpixel(x_mid+y,y_mid+x,WHITE);
putpixel(x_mid-y,y_mid+x,WHITE);
putpixel(x_mid-x,y_mid+y,WHITE);
putpixel(x_mid-x,y_mid-y,WHITE);
putpixel(x_mid-y,y_mid-x,WHITE);
putpixel(x_mid+y,y_mid-x,WHITE);
putpixel(x_mid+x,y_mid-y,WHITE);
if(dp<0) {
dp+=(2*x)+1;
}
else{
y=y-1;
dp+=(2*x)-(2*y)+1;
}
x=x+1;
}while(y>x);
getch();
closegraph();
return 0;
}