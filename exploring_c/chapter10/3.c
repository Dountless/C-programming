#include<stdio.h>
struct virus
{
		char signature[25];
		int size;
}v[2];

int main()
{
		 v[0]={"Yankee",1813};
		 v[1]={"dark avenger",1795};
		int i;

		for(i=0;i<=1;i++)
			printf("%s %d",v[i].signature,v[i].size);
		return 0;
}

		
