#include <stdio.h>
#include <string.h>

#define SIZE 256
#define WORDS 30
#define DELIMS ",. "

int main(void)
{
    char str[SIZE] = "", *ptr = NULL, *word[WORDS] = { NULL };
    size_t counter = 0, i, j, flag;

    printf("Enter the string: ");
    if (scanf("%255[^\n]", str) == 1 && fgetc(stdin) == '\n')
    {
    for (
            ptr = strtok(str, DELIMS);
            ptr != NULL && counter < WORDS;
            ++counter, ptr = strtok(NULL, DELIMS)
        )
    {
        word[counter] = ptr;
    }

    printf("Unique words:\t");
    for (i = 0; i < counter; ++i)
    {
        flag = 0;
        for (j = 0; j < counter; ++j)
        {
        if (i != j && strcmp(word[i], word[j]) == 0)
            {
            flag = 1;
            break;
            }
        }

        if (flag == 0)
            printf("%s\t", word[i]);
    }
    }

    return 0;
}
