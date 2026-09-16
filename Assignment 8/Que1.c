#include<stdio.h>
#pragma pack(1)

typedef struct student 
{
	int student_roll;
	char name[20];
	float marks;
	
}stu;

void accept_student(stu *ptr);
void display_student(stu s1);
void accept_student(stu *ptr)
{
	printf("Enter the Emp ID : ");
	scanf("%d",&ptr->student_roll);


	printf("Enter the Name : ");
	scanf("%s",&ptr->name);

	
	printf("Enter the Salary : ");
	scanf("%f",&ptr->marks);




}

void display_student(stu s1)
{
	printf("Student Roll NO : %d  Name : %s Marks : %.2f\n",s1.student_roll,s1.name,s1.marks);
}



int main()
{
	stu s1;
	//pass by adress
	accept_student(&s1);
	//pass by value
	display_student(s1);
}

