// #include<stdio.h>
// #include<conio.h>
// struct student
// {
//  char name[20];
//  int rollno;
//  int physics,chem,maths;
// };

// int main()
// {
// struct student st[100];
// int n,i,j; 
// printf("Enter the number of students=");
// scanf("%d",&n);
// for(i=0;i<n;i++)
// {
// printf("Enter the students name,roll no and marks in three subjects=\n");
// scanf("%s%d%d%d%d",&st[i].name,&st[i].rollno,&st[i].physics,&st[i].chem,&st[i].maths);
// }
// printf("name\trollno\tphysics\tchem\tmaths\t\n");
// printf("......................................\n");
// for(i=0;i<n;i++)
// {
// printf("%s\t%d\t%d\t%d\t%d\n",st[i].name,st[i].rollno,st[i].physics,st[i].chem,st[i].maths);
// }
// return 0;
// }


#include<stdio.h>
#include<conio.h>
struct student
{
char name[20];
int rollno;
int phy,chem,maths;
};
void main()
{
struct student
st[100];
int i,j,n;
// clrscr();
printf("Enter total student number=");
scanf("%d",&n);

for(i=0;i<n;i++)
{
 printf("Enter the students name rllno and marks in three subject=");
 scanf("%s%d%d%d%d",&st[i].name,&st[i].rollno,&st[i].phy,&st[i].chem,&st[i].maths);
}
printf("name\trollno\tphy\tchem\tmaths\n");
printf("............................................\n");

for(i=0;i<n;i++)
{
printf("%s\t%d\t%d\t%d\t%d\n",st[i].name,st[i].rollno,st[i].phy,st[i].chem,st[i].maths);
}
getch();
}
