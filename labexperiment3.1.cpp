int main()
{
    char str[100];
    char ch;
    int words;

    // Read string (including spaces)
    printf("Enter a string: ");
    scanf(" %c", str);

    // Read character to find frequency
    printf("Enter a character to count frequency: ");
    scanf(" %c", &ch);

    // Function calls (each in separate line)
    printf("Frequency of '%c' = %d\n", ch, countChar(str, ch));

    words = countWords(str);
    printf("Number of words = %d\n", words);

    printf("Alphabet frequencies:\n");
    printAlphabetFrequency(str);

    return 0;
}

