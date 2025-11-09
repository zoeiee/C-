/*#include <stdio.h>
int main(){
printf("Hello");

printf("will this work?");
    return 0;

}*/
#include <stdio.h>
/*int main(){
    int n;
    scanf("%d", &n);
    if (n%2 == 0) {
        printf("It is even");
    }
    else printf("It is odd");

    return 0;*/



#include <stdio.h>
int main() {
    int i;
    char str[100];
    printf("Enter your string: ");
    fgets(str, 100, stdin);

    for (i=0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str [i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Your uppercase sentence is: %s", str);
        return 0;
}
