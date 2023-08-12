/*
    จงแปลงเลขฐาน 16 ที่รับมาจากผู้ใช้ให้กลายเป็นเลขฐาน 2
    
    Test case:
        User input :
            FB
    Output:
        11111011

    Test case:
        User input :
            19
    Output:
        11001
*/
#include <stdio.h>
#include <string.h>

int main() {
    char hex[100];
    char binary[400] = "";

    printf("User input :\n");
    scanf("%s", hex);

    for (int i = 0; i < strlen(hex); i++) {
        switch (hex[i]) {
            case '0': strcat(binary, "0000"); break;
            case '1': strcat(binary, "0001"); break;
            case '2': strcat(binary, "0010"); break;
            case '3': strcat(binary, "0011"); break;
            case '4': strcat(binary, "0100"); break;
            case '5': strcat(binary, "0101"); break;
            case '6': strcat(binary, "0110"); break;
            case '7': strcat(binary, "0111"); break;
            case '8': strcat(binary, "1000"); break;
            case '9': strcat(binary, "1001"); break;
            case 'A': strcat(binary, "1010"); break;
            case 'B': strcat(binary, "1011"); break;
            case 'C': strcat(binary, "1100"); break;
            case 'D': strcat(binary, "1101"); break;
            case 'E': strcat(binary, "1110"); break;
            case 'F': strcat(binary, "1111"); break;
        }
    }

    printf("%s\n", binary);

    return 0;
}//end function
