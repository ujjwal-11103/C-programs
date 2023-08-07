 #include<stdio.h>
 #include<conio.h>
 int avg(int a,int b,int c);
 int main()
 {
 int m=2,n=2,o=2,s;
 s=avg(m,n,o);
 printf("Average=%d",s);
 getch();
 }
 int avg(int a,int b,int c)
 {
  int q;
  q=(a+b+c)/2;
  return q;
 }