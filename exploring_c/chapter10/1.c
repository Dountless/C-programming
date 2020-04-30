#include<stdio.h>
int main()
{
		struct employee
		{
			char name[25];
			int age;
			float bs;
		};
		struct employee a;
		a.name="hacker";
		a.age=25;
		printf("%s %d\n",a.name,a.age);
		return 0;
}

