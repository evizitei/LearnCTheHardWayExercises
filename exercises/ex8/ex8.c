#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Ethan";
	char full_name[] = {
		'E', 't', 'h', 'a', 'n',
		' ', 'C', '.', ' ',
		'V', 'i', 'z', 'i', 't', 'e', 'i', '\0'
	};

	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]): %ld\n", sizeof(areas));
	printf("The number of ints in areas: %ld\n", 
		sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd is %d.\n",
    	areas[0], areas[1]);

    printf("The size of an char: %ld\n", sizeof(char));
    printf("The size of name: %ld\n", sizeof(name));
    printf("The number of chars in name: %ld\n", 
		sizeof(name) / sizeof(char));
    printf("The size of full name: %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", 
		sizeof(full_name) / sizeof(char));

    printf("name=\'%s\' and full_name=\'%s\'",
    	name, full_name);

    return 0;
}