#include<stdio.h>
int main()
{
		struct
		{
			char name[25];
			char language[10];
		}a;
		static struct a={"hacker","C1"};
		printf("%s %s\n",a.name,a.language);
		return 0;
}



			
