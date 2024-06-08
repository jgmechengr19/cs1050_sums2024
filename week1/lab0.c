#include<stdio.h>

int main() {
	unsigned int birth_year;
	int current_year = 2024;
	int age;
	
	printf("first lab of CS1050\n\n");
	printf("please enter your birth year:");
	scanf("%u", &birth_year);
	printf("size of birth year: %d\n", ((int)sizeof(birth_year)));  //intiger takes 4 bytes
	printf("address of variable 'birth_year'%p: ", &birth_year);
	age = current_year - birth_year;
	printf("your age is: %d\n", age); 

	return 0;

	

}
