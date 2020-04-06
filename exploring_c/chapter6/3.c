#include<stdio.h>
int main()
{
	unsigned char ch;
	for (ch=65;ch<=255;ch++)
		printf("%d %c\n",ch,ch);
	return 0;
}
