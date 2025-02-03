#include<stdio.h>

struct stu{
	int roll;
	char name[50];
	int chem;
	int maths;
	int phy;
};

int main()
{
	int i;
	struct stu stu[5];
	
	for(i=0;i<5;i++)
	{
		printf("Enter the details of Student %d\n",i+1);
		
		printf("Roll no. = ");
		scanf("%d", &asstu[i].roll);
		
		printf("Name = ");
		scanf("%s", &stu[i].name);
		
		printf("Chemistry Marks = ");
		scanf("%d", &stu[i].chem);
		
		printf("Maths Marks = ");
		scanf("%d", &stu[i].maths);
		
		printf("Physics Marks = ");
		scanf("%d", &stu[i].phy);
	}
	
	float per=((stu[i].chem+stu[i].maths+stu[i].phy)*100)/300;
	
	for(i=0;i<5;i++)
	{
		
		printf("%s (%d)\n",stu[i].name,stu[i].roll);
		
		printf("Chemistry = %d\n",stu[i].chem);
		
		printf("Maths = %d\n",stu[i].maths);
		
		printf("Physics = %d\n",stu[i].phy);
		
		printf("Total = %d/300\n", stu[i].chem+stu[i].maths+stu[i].phy);
		
		printf("Percentage = %.2f\n",per);
	}
		
	return 0;
}
