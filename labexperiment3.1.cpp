#include <stdio.h>

void shortName(char name[]) {
    int i, lastStart = 0;

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastStart = i + 1;
        }
    }

    if (lastStart > 0) {
        printf("%c. ", name[0]);
    }

    for (i = 1; i < lastStart; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", name[i + 1]);
        }
    }

    for (i = lastStart; name[i] != '\0'; i++) {
        printf("%c", name[i]);
    }
}

int main() {
    char name[100];

    printf("Enter full name: ");
    gets(name);   

    shortName(name);   

    return 0;
}
