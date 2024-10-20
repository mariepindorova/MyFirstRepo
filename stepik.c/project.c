#include <stdio.h>
#include <stdbool.h>

const char *characters[] = {
      "+",
      "",
      "abc",
      "def",
      "ghi",
      "jkl",
      "mno",
      "pqrs",
      "tuv",
      "wxyz"}; 				

bool char_is_in_array(const char *characters[], char value) {
    for (int i=0; i<10; i++) {
        for (int j; j != '\0'; j++) {
            if (characters[i][j] == value) {
                return true;
            }
        }
    }
    return false;
}
  

const char *numbers[] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

bool num_is_in_array(const char *numbers[], const char *value) {
    for (int i=0; i<10; i++) {
        int j=0;
        while (numbers[i][j] == value[j] && value[j] != '\0' && numbers[i][j] != '\0') {
            j++;
        }
        if (numbers[i][j] == '\0' && value[j] == '\0') {
            return true;
        }
    }
    return false;
}
/*проверка на наличие в строке цифр*/

bool char_is_in_array(char characters[], int size, char value) {
    for (int i=0; i<size; i++) {
        if (characters[i] == value) {
            return 1;
        } else {
            return 0;
        }
        }
    }
/*проверка на наличие в массиве элемента типа char*/









int main() {
    

    for (int i=0; i<size; i++) {                                //проходим по каждой строке массива 
        for (int j=0; j<size; j++) {
            if (num_is_in_array) {
            printf("%d", i);
    } else {
        printf("Not found");
    }
        }
        
    }
    return 0;
    
}

    



    // int cislo;
    // int index;
    // if(index>=0 && index<100) {
    //     char buttons[index] = {
    //     {'a', 'b', 'c'}, //2 tlacitko
    //     {'d', 'e', 'f'}, //3 tlacitko
    //     {'g', 'h', 'i'}, //4 tlacitko
    //     {'j', 'k', 'l'}, //5 tlacitko
    //     {'m', 'n', 'o'}, //6 tlacitko
    //     {'p', 'q', 'r', 's'}, //7 tlacitko
    //     {'t', 'u', 'v'}, //8 tlacitko
    //     {'w', 'x', 'y', 'z'}, //9 tlacitko
    //     {'+'} //0 tlacitko 
    // };  
    
    //     switch(cislo) {
    //             case 2: return buttons[1];
    //             case 3: return buttons[2];
    //             case 4: return buttons[3];
    
    // }
    // printf("%c", buttons[2]);
    // }


// int main() {
// 	char arr_0[1] = {'+'};
// 	char arr_2[3] = {'a', 'b', 'c'};
// 	char arr_3[3] = {'d', 'e', 'f'};
// 	char arr_4[3] = {'g', 'h', 'i'};
// 	char arr_5[3] = {'j', 'k', 'l'};
// 	char arr_6[3] = {'m', 'n', 'o'};
// 	char arr_7[4] = {'p', 'q', 'r', 's'};
// 	char arr_8[3] = {'t', 'u', 'v'};
// 	char arr_9[4] = {'w', 'x', 'y', 'z'};
    
    