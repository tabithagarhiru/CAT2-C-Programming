#include <stdio.h>
#include <string.h>

struct employee  {
	char name [25];
	int id;
	char dep [20];
	float salary ;
	char email [50];
} employee1;

int main () {
	strcpy (employee1.name, "John Doe");
	employee1.id =12345;
	strcpy (employee1.dep, "Human Resources");
	employee1.salary = 55000.50;
	strcpy (employee1.email, "john.doe@company.com");
	
	printf ("name %s\n", employee1.name);
	printf("id %d\n", employee1.id);
	printf("dep %s\n", employee1.dep);
	printf("salary %.2f\n", employee1.salary);
	printf("email %s\n", employee1.email);
}