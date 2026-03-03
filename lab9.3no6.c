#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], result[100];
    int i, j, k;
    int count;

    printf("Enter the First string:\n");
    gets(str1);

    printf("Enter the Second string:\n");
    gets(str2);

    printf("\n--- Summary ---\n");

    for(i = 0; str1[i] != '\0'; i++)
    {
        count = 0;
        k = 0;

        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                count++;
            }
            else
            {
                result[k] = str2[j];
                k++;
            }
        }

        result[k] = '\0';
        strcpy(str2, result);

        if(count > 0)
            printf("Character '%c' removed %d time(s)\n", str1[i], count);
        else
            printf("Character '%c' not found\n", str1[i]);
    }

    printf("\nFinal string: %s\n", str2);

    return 0;
}
