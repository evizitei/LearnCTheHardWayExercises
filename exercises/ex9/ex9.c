#include <stdio.h>

void printString(char *name, char* message)
{
	printf("%s: %c %c %c %c\n", message,
		name[0], name[1], name[2], name[3]);
	printf("%s: %s\n", message, name);
}

void printArrays(int *nums, char *name)
{
 	printf("numbers: %d %d %d %d\n",
		nums[0], nums[1], nums[2], nums[3]);
 	printString(name, "name");
}

int main(int argc, char *argv[])
{
	int numbers[4] = {0};
	char name[4] = {'a'};

	//print them out raw
	printArrays(numbers, name);

	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;

	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';

	printArrays(numbers, name);

	char *another = "Zed";
	printString(another, "another");

	return 0;
}