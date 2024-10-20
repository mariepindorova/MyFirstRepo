#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool num_is_in_array(const char *string, const char *value) {
	char input[100];
	char line[1024];
	
}

int main(void) {
	const char *line;
	const char *input;
	printf("Insert string: ");
	scanf("%p", &input);
	if (strstr(line, input)) {
	    printf("The found contact is: %p", line);
	} else {
	    printf("Not found");
	}	
	return 0;
}