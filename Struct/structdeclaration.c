#include <stdio.h>

struct data
{
	int Id;
	float salary;
	char name[20];
};

int main()
{
	struct data d1;
	printf("Enter the details ID ,salary, name .\n");
	scanf("%d %f %s", &d1.Id, &d1.salary, d1.name);

	printf("The data stored in the structure are :Id = %d salary = %f name = %s \n", d1.Id, d1.salary, d1.name);
	return 0;
}
