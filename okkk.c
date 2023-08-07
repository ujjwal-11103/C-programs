// A recursive C program to print all numbers from 1
// to N without semicolon
// #include <stdio.h>
// #define N 10

// int main()
// {
// register int num=1;
// printf("%d\n", num);

// if (num <= N && printf("%d ", num) && main(num + 1))
// {
// }
// }
// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("%d", num);
//     return 0;
// }
#include <stdio.h>
#include <limits.h>
int main()
{
	printf("%ld\n",sizeof(long int));
	// printf("%s\n",__DATE__);
	// printf("%s",__TIME__);
	// int var1 = INT_MIN;
	// int var2 = INT_MAX;
	// printf("range=%d to %d\n", var1, var2);
	unsigned int var3 = 0;
	unsigned int var4 = UINT_MAX;
	printf("range=%d to %d\n", var3, var4);
	int w=-1;
	printf("%u",w);
	return 0;
}