#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   int sum,max,min,i,j,k;
   int a[11][11][11]={ 0 };
   char d;
   srand((unsigned int)time(NULL));/*让rand()产生的随机数随机化，用时间作种子 srand(time(NULL))*/
   for(i=1;i<=10;i++)/*一共10页*/
 {
   for (j=1;j<=10;j++)
  {
   for(k=1;k<=10;k++)
   {
    a[i][j][k]=rand()%1000+1;/*随机数的范围在1-1000*/
   }
  }
 }
   for (i=1;i<=10;i++)
 {
    system("cls");/*清屏*/
    max=-1;
    min=10000;
    sum=0;
  for(j=1;j<=10;j++)
  {
   for(k=1;k<=10;k++)
   {
    sum=sum+a[i][j][k];
    if(a[i][j][k]>max)/*比大小，求出最大值*/
    {
     max=a[i][j][k];
    }
    if(a[i][j][k]<min)/*比大小，求出最小值*/
    {
     min=a[i][j][k];
    }
    printf("%5d",a[i][j][k]);
   }
    printf("\n");
  }
    printf("\n最大值=%d 最小值=%d 平均值=%.2f\n",max,min,sum/100*1.0);
    printf("按“a”返回上一页，按回车进入下一页，指定输入1-10页（第10页用0代替）,按“b”退出\n");
    d=getch();
    switch (d)
  {
    case 13:continue;break;/*13是回车的ASCII码值*/
    case 'a':i-=2;break;/*i到10的时候循环还能进行，第10次循环结束后i的值会变成11，所以要多减去1*/
    case '1':i=0;break;
    case '2':i=1;break;
    case '3':i=2;break;
    case '4':i=3;break;
    case '5':i=4;break;
    case '6':i=5;break;
    case '7':i=6;break;
    case '8':i=7;break;
    case '9':i=8;break;
    case '0':i=9;break;
    case 'b':break;
    default:
      i=0;break;
  }
  printf("press any key to continue…");
 }
   return 0;
}
