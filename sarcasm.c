#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void convert_char(char *c) { // from ctype.h, 50/50 chance
    if (isalpha(*c)) {
        if (rand() % 2 == 0) {
            *c = toupper(*c);
        } else {
            *c = tolower(*c);
        }
    }
}

int main() {
    char input[1000];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    srand(time(NULL));

    for (int i = 0; input[i] != '\0'; i++) {
        convert_char(&input[i]);
    }

    printf("Converted output: %s", input);
    return 0;
}
