#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char phone_digits[26] = {
    '2', '2', '2', //a, b, c
    '3', '3', '3', //d, e, f
    '4', '4', '4', //g, h, i
    '5', '5', '5', //j, k, l
    '6', '6', '6', //m, n, o
    '7', '7', '7', '7', //p, q, r, s
    '8', '8', '8', //t, u, v
    '9', '9', '9', '9' //w, x, y, z
};

void letters_to_digits (const char *name, char *result) {
    int i=0, j=0;
    while (name[i] != '\0') {
        if (isalpha(name[i])) {
            result[j++] = phone_digits[tolower(name[i]) - 'a'];
        } else if (isdigit(name[i])) {
            result[j++] = name[i];
        }
        i++;
    }
    result[j] = '\0';
}

void read_str(char *str, int max_len) {
    scanf( " %[^\n]", str);
}

int main(int arg_c, char *arg_v[]) {
    char name[256]; // массив для хранения имени контакта
    char *digits_input; // массив для хранения введенной строки цифр для поиска
    char phone[20]; // массив для хранения номера телефона
    char name_in_digits[256]; // массив для хранения преобразованного в цифры имени контакта

    
    if (arg_c != 2) {
        printf("incorrect usage");
        return 1;
    }
    digits_input = arg_v[1];
    
    //printf("%s\n", digits_input);
    /*if (strstr(name_in_digits, digits_input) == NULL && strstr(phone, digits_input) == NULL) {
            printf("Not found\n");
            return 1;
        }*/

    while(1) {
        read_str(name, sizeof(name));
        if (name[0] == '\0') {
            break;
        }
        read_str(phone, sizeof(phone));
        if (phone[0] == '\0') {
            break;
        }
        letters_to_digits(name, name_in_digits);
        if (strstr(name_in_digits, digits_input) != NULL || strstr(phone, digits_input) != NULL) {
            printf("%s, %s\n", name, phone);
        }
        else {
            printf("Not found\n");
            break;
        }
    }
    return 0;
}



/* bool num_is_in_array(const char *line, const char *value) {
    return strstr(line, value) != NULL;
} 

int main() {
    char input[100];
    char line[1024];
    int i=0;
	bool found = false;

	printf("Insert what you are looking for: ");
    scanf("%s", input);

    while(1) {
        int ch = getchar();
        if (ch == '\n' || ch == EOF) {
            line[i] = '\0';
            if (num_is_in_array(line, input)) {
                printf("String found in file: %s\n", line);
				found = true;
            }
            if (ch == EOF) {
                break;
            }
            i=0;
        }
        else {
            line[i++] = ch;
        }
        if (i >= sizeof(line) - 1) {
            fprintf(stderr, "String too long\n");
            break;
        }
    }  
	if (!found) {
		printf("Not found\n");
	}
    return 0;  
} */