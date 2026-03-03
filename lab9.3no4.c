#include <stdio.h>
#define MAX 50

int countVowel(char []);

int main() {

    char text[MAX];
    int Voweldigit;

    printf("Enter text : ");
    scanf("%s", text);

    Voweldigit = countVowel(text);

    printf("Text : [%s] has %d vowels\n", text, Voweldigit);

    return 0;
}

int countVowel(char t[]) {

    int i = 0, count = 0;
    int a=0, e=0, i_v=0, o=0, u=0;

    while(i < MAX && t[i] != '\0') {

        if(t[i]=='A' || t[i]=='a') {
            count++;
            a++;
        }
        else if(t[i]=='E' || t[i]=='e') {
            count++;
            e++;
        }
        else if(t[i]=='I' || t[i]=='i') {
            count++;
            i_v++;
        }
        else if(t[i]=='O' || t[i]=='o') {
            count++;
            o++;
        }
        else if(t[i]=='U' || t[i]=='u') {
            count++;
            u++;
        }

        i++;
    }

    printf("A = %d\n", a);
    printf("E = %d\n", e);
    printf("I = %d\n", i_v);
    printf("O = %d\n", o);
    printf("U = %d\n", u);

    return count;
}
