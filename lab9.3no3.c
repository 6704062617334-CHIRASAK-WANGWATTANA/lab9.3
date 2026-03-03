#include <stdio.h>
#include <string.h>

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64]);

int main() {

    char login[64], password[64];

    char logindb[5][64] = {"user1", "user2", "user3", "user4", "user5"};
    char passdb[5][64]  = {"pass1", "pass2", "pass3", "pass4", "pass5"};

    printf("Enter login : ");
    scanf("%s", login);

    printf("Enter password : ");
    scanf("%s", password);

    if(checkLogin(login, password, logindb, passdb))
        printf("Welcome\n");
    else
        printf("Incorrect login or password\n");

    return 0;
}

int checkLogin(char *login, char *passwd, char logindb[][64], char passdb[][64]) {

    int i;

    for(i = 0; i < 5; i++) {

        if(strcmp(login, logindb[i]) == 0 &&
           strcmp(passwd, passdb[i]) == 0) {

            return 1;   // เจอคู่ที่ตรงกัน
        }
    }

    return 0;  // ไม่เจอเลย
}
