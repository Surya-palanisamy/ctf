#include <stdio.h>
#include <string.h>

unsigned char data[] = { 0x15, 0x3A, 0x2F, 0x77, 0x61, 0x21 }; // encoded
int main() {
    char password[50];
    printf("Enter password: ");
    scanf("%s", password);

    if(strcmp(password, "hackersCTF") == 0) {
        int key = 7;
        for(int i = 0; i < sizeof(data); i++) {
            key = (key * 3 + i) % 256;  // dynamic key
            putchar((data[i] ^ key) - 1); // extra shift
        }
        printf("\n");
    } else {
        printf("Wrong password!\n");
    }
    return 0;
}
