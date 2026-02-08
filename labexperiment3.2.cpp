#include <stdio.h>

int countChar(char str[], char ch)
{
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
            count++;
    }
    return count;
}

int countWords(char str[])
{
    return countChar(str, ' ') + 1;
}

void printAlphabetFrequency(char str[])
{
    char ch;
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        int freq = countChar(str, ch) + countChar(str, ch - 32);
        if (freq > 0)
            printf("%c : %d\n", ch, freq);
    }
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    gets(str);

    printf("Number of words: %d\n", countWords(str));

    printf("Alphabet frequencies:\n");
    printAlphabetFrequency(str);

    return 0;
}

