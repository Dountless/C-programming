#include<stdio.h>
#define IT 0.1
#define HRA 0.2
#define DA 0.3
int main()
{
	float bas_sal,net_sal;
	bas_sal=1000;
	net_sal=bas_sal*(1+HRA+DA-IT);
	printf("gross salary=%f\n",net_sal);
	return 0;
}
