#include<iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



struct student
{

	int rollno;
	char name[50];
	float cgpi;
	int sem; //semester

} ;
void display_info(int rollno,char name[],int n,float cgpi,int sem)
{
	printf("roll number=%d\n",rollno);
    puts(name);
    printf("cgpi =%f\n",cgpi);
    printf("semester=%d\n",sem);
}


int main()
{   int n;
    struct student A[100];
    printf("Enter total number of students:\n");
    scanf("%d",&n);
	for(int i=0;i<n;i++)
        {
		printf("Enter the information of student:%d",i+1);
		printf("\n Enter roll number of student:");
		scanf("%d",&A[i].rollno);
		printf("Enter name :");
		scanf("%s",A[i].name);
		printf("\nEnter cgpi of student\n");
		scanf("%f",&A[i].cgpi);
		printf("enter semester of student\n");
		scanf("%d",&A[i].sem);
		}

	//all records of students whose cgpi is greater than k
	int k;
	printf("enter the value of k\n");
	scanf("%d",&k);
	for(int i=0;i<n;i++)
	   {
		if((A[i].cgpi)>k)
		 {
			printf("%d student info:\n",i+1);
			display_info(A[i].rollno,A[i].name,n,A[i].cgpi,A[i].sem);

          }
	   }

	//insert new record at kth position
 int pos;//kth position
 printf("enter the position:\n");
 scanf("%d",&pos);

 for(int i=n-1;i>=pos;i--)
    {
 	A[i+1]=A[i];
 	if(i==pos)
 	  {
 	    printf("Enter the information of student:%d",i+1);
		printf("Enter roll number of student:");
		scanf("%d",&A[i].rollno);
		printf("Enter name :");
		scanf("%s",A[i].name);
		printf("Enter cgpi of student\n");
		scanf("%f",&A[i].cgpi);
		printf("enter semester of student\n");
		scanf("%d",&A[i].sem);

 	   }
 	printf("\n\n");
   }

 //printing new record

 for(int i=0;i<n;i++)
 {
 	printf("record of %d student:\n",i+1);
 	display_info(A[i].rollno,A[i].name,n,A[i].cgpi,A[i].sem);
 	printf("\n\n");
 }

	return 0;
}



