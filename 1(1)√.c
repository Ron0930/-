#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
   int sum,max,min,i,j,k;
   int a[11][11][11]={ 0 };
   char d;
   srand((unsigned int)time(NULL));/*��rand()��������������������ʱ�������� srand(time(NULL))*/
   for(i=1;i<=10;i++)/*һ��10ҳ*/
 {
   for (j=1;j<=10;j++)
  {
   for(k=1;k<=10;k++)
   {
    a[i][j][k]=rand()%1000+1;/*������ķ�Χ��1-1000*/
   }
  }
 }
   for (i=1;i<=10;i++)
 {
    system("cls");/*����*/
    max=-1;
    min=10000;
    sum=0;
  for(j=1;j<=10;j++)
  {
   for(k=1;k<=10;k++)
   {
    sum=sum+a[i][j][k];
    if(a[i][j][k]>max)/*�ȴ�С��������ֵ*/
    {
     max=a[i][j][k];
    }
    if(a[i][j][k]<min)/*�ȴ�С�������Сֵ*/
    {
     min=a[i][j][k];
    }
    printf("%5d",a[i][j][k]);
   }
    printf("\n");
  }
    printf("\n���ֵ=%d ��Сֵ=%d ƽ��ֵ=%.2f\n",max,min,sum/100*1.0);
    printf("����a��������һҳ�����س�������һҳ��ָ������1-10ҳ����10ҳ��0���棩,����b���˳�\n");
    d=getch();
    switch (d)
  {
    case 13:continue;break;/*13�ǻس���ASCII��ֵ*/
    case 'a':i-=2;break;/*i��10��ʱ��ѭ�����ܽ��У���10��ѭ��������i��ֵ����11������Ҫ���ȥ1*/
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
  printf("press any key to continue��");
 }
   return 0;
}
