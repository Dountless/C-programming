#include<stdio.h>
int main()
{
char ch;
int a;
float b;
long int c;
printf("bytes occupied by ch=%ld\n",sizeof (ch));
printf("bytes occupied by a=%ld\n",sizeof (a));
printf("bytes occupied by b=%ld\n",sizeof (b));	
printf("bytes occupied by c=%ld \n",sizeof (c));
return 0;
}
