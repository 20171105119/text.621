#include"stdio.h"
#include"string.h"
int main()
{
    FILE *a;
    int i=0,j=0;
    char b[50][50][100];
    int c[50][50];
	int max=0;
	int min=100;
    int average=0;
    int lastscore=0;
    int allscore=0;
	int n=0;
    FILE *p;
	FILE *q;//给要操作的指针赋初值，如int *p = a;
    if((a=fopen("C:/Users/mzl/Desktop/student1.csv","r"))==0)
{
        printf("文件不存在\n");
}
    else
    {
        char buf[1000];
        p=fopen("C:/Users/mzl/Desktop/student1.csv","r");
        
        while(fgets(buf,1000,p)) // fgets循环读取，直到文件最后，才会返回NULL
        {
            n++; // 累计行数
        }
	//	printf("%d",n);
        fclose(p);
        
            for(i=0;i<n;i++)
            {
            for(j=0;j<11;j++)
			{
			
        fscanf(a,"%[^,],",b[i][j]);
        printf("%s ",b[i][j]);
       
        //printf("%d ",i);
       //printf("%d ",j);
       
            } 
		    }
		    printf("\n");
      //  printf("%s",b[0][1]);
       for(i=1;i<n;i++)
       {
       	for(j=6;j<11;j++)
       	{
       	 c[i][j]=atoi(b[i][j]);//ǿ������ת�� 
        }
	   }
	   for(i=1;i<n;i++)
	   {
	   for(j=6;j<11;j++)
	   {
	   	if(c[i][j]>=max)
	   	max=c[i][j];
	   	if(c[i][j]<=min)
	   	min=c[i][j];
	   	allscore+=c[i][j];
	   }
	   j=0;
	   lastscore=allscore-min-max;
	   average=lastscore/3;
	   printf("%s  ",b[i][j+1]);
	   printf("average=%d\n",average);
	   lastscore=0;
	   average=0;
	   allscore=0;
	   max=0;
	   min=100;
	   }
    }
       q=fopen("C:/users/mzl/Desktop/student2.csv","w");
            for(i=0;i<n;i++)
            {
            for(j=0;j<11;j++)
			{
			
       fprintf(q,"%s   ",b[i][j]);
            }
            }
        fprintf(q,"\n");
       for(i=1;i<n;i++)
	   {
	   for(j=6;j<11;j++)
	   {
	   	if(c[i][j]>=max)
	   	max=c[i][j];
	   	if(c[i][j]<=min)
	   	min=c[i][j];
	   	allscore+=c[i][j];
	   }
	   j=0;
	   lastscore=allscore-min-max;
	   average=lastscore/3;
	   fprintf(q,"%s  ",b[i][j+1]);
	   fprintf(q,"average=%d\n",average);
	   lastscore=0;
	   average=0;
	   allscore=0;
	   max=0;
	   min=100;
	   }
}
