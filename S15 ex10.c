#include <stdio.h>
#include <string.h>
int main() {
    char chuoi[] = "dung dep trai";
    int dem[256] = {0}; 
    for (int i = 0; i < strlen(chuoi); i++) {
        dem[(unsigned char)chuoi[i]]++;
    }
    printf("Cac ky tu va so lan xuat hien:\n");
    for (int i = 0; i < 256; i++) {
        if (dem[i] > 0) {
            printf("Ky tu '%c' xuat hien %d lan\n", i, dem[i]);
        }
    }
    return 0;
}

