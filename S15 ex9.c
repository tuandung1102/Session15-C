#include <stdio.h>
#include <string.h>

int main() {
    char str[100] = "hello world"; 
    char kytu;

    printf("Chuoi ban dau: %s\n", str);

    printf("Nhap vao ky tu can xoa: ");
    scanf("%c", &kytu);

    int i, j = 0;
    int length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] != kytu) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0'; 

    printf("Chuoi sau khi xoa ky tu '%c': %s\n", kytu, str);

    return 0;
}
