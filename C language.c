#include <stdio.h>
#include <string.h>
int main() {
    char s1[100] = "Aditi ";
    char s2[90] = "Jha";
    strcat(s1, s2);
    printf("%s\n", s1);
    return 0;
}