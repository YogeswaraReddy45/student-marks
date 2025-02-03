#include <stdio.h>
struct a{
  char name[30];
  int rollno;
  int marks[5];
  int total;
};
int function(struct a stu);
void main()
{
  printf("===================================\n");
  printf("||     STUDENTS RANKING SYSTEM   ||\n");
  printf("===================================\n");
  int size,i,j;
  printf("Enter the number of students: ");
  scanf("%d",&size);
  struct a s[size];
  for(i=0;i<size;i++){
    s[i].total=0;
    printf("Enter the student %d name :",i+1);
    scanf(" %[^\n]s ",s[i].name);
    printf("Enter roll no: ");
    scanf(" %d",&s[i].rollno);
    printf("Enter the subject marks: ");
    for(j=0;j<5;j++){
      scanf("%d",&s[i].marks[j]);
      s[i].total += s[i].marks[j];
    }
  }
for(i=0;i<size-1;i++){
  for(j=i+1;j<size;j++){
    if(s[i].total<s[j].total){
      int temp=s[i].total;
      s[i].total=s[j].total;
      s[j].total=temp;
    }
  }
}
  printf("\nRank\tRollno\tName\t\tTotal\n");
  printf("=================================\n");
  for(i=0;i<size;i++){
  printf("%d\t%d\t%-15s\t%d\n",i+1,s[i].rollno,s[i].name,s[i].total);
  }
}