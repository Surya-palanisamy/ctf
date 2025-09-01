#include <stdio.h>
#include <string.h>


int main() {
    char password[50];
    printf("Enter password: ");
    scanf("%s", password);

    if(strcmp(password, "hackersCTF") == 0) {
        printf("Correct");
        printf("\n");
    } else {
        printf("Wrong password!\n");
    }
    return 0;
}
