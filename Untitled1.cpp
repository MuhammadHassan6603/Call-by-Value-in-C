#include<stdio.h>
#include<string.h>
struct Student
{
	int rollNo;
	char name[20];
	float marks;	
};

void myFun(struct Student rec) // S1 is copied into Rec
{
	printf("\n\nRec Roll No = %d \nRec Name = %s \nRec Marks = %.1f",rec.rollNo,rec.name,rec.marks);
	rec.rollNo=112;
	strcpy(rec.name,"Hehe");
	rec.marks=11.5f;
	printf("After Update in Formal");
	printf("\n\nRec Roll No = %d \nRec Name = %s \nRec Marks = %.1f ",rec.rollNo,rec.name,rec.marks);
}

int main()
{
	struct Student s1={338,"Hassan",79.3f};
	/*struct Student s3 = { 101, ",Not Hassan" , 70.5f};
	
	s1.rollNo = 338;
	strcpy(s1.name,"Hassan");
	s1.marks = 50.5f;
	
	s2=s1;
	strcpy(s2.name,"Yes Hassan");	
	s2.rollNo = s1.rollNo;
	strcpy(s2.name,s1.name);
	s2.marks = s1.marks;*/
	
	printf("S1 Roll No = %d \nS1 Name = %s \nS1 Marks = %.1f\n",s1.rollNo,s1.name,s1.marks);
	myFun(s1);
	printf("\n\nS1 Roll No = %d \nS1 Name = %s \nS1 Marks = %.1f ",s1.rollNo,s1.name,s1.marks);
	
	/*printf("\n\nS2 Roll No = %d \nS2 Name = %s \nS2 Marks = %.1f ",s2.rollNo,s2.name,s2.marks);
	printf("\n\nS3 Roll No = %d \nS3 Name = %s \nS3 Marks = %.1f ",s3.rollNo,s3.name,s3.marks);*/

}
