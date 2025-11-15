#include <stdio.h>
#include <string.h>
int main() {
    int count = 0;
    char s1[12];
    printf("Enter string to generate: ");
    fgets(s1,sizeof(s1), stdin);
    count = strlen(s1);
    printf("The length of the string is: %d\n", count);
    return 0;


    int i,
    i = 0;
    while (s1[i] != '\0') {
        i++;
        count++;
    }
    printf("%d", count);
}