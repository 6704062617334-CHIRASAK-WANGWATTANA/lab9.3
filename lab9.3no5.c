#include <stdio.h>

int main() {

    char text[200];
    int i = 0;
    int sum = 0;
    fgets(text, sizeof(text), stdin);

    while(text[i] != '\0') {

        if(text[i] >= '0' && text[i] <= '9') {
            sum = sum + (text[i] - '0');
        }

        i++;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
