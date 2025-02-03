#include<stdio.h>

int main()
{
	FILE *fp;
	int a[21];
	int i;
	int n=49;
	
	for(i=0;i<21;i++)
	{
		printf("a[%d] = %d\n",i+1,n+1);
		n++;
	}
	
	fp=fopen("even.txt","a");
	
	if(fp==NULL)
	{
		printf("file open successfull\n");
		
		for(i=0;i<21;i++)
		{
			if(a[i]%2==0)
			{
				fprintf(fp,"%d ",a[i]);
			}
		}
		
		fclose(fp);
	}
	
	fp=fopen("odd.txt","a");
	
	if(fp==NULL)
	{
		printf("file open successfull\n");
		
		for(i=0;i<21;i++)
		{
			if(a[i]%2==1)
			{
				fprintf(fp,"%d ",a[i]);
			}
		}
		
		fclose(fp);
	}
	
	return 0;
}
