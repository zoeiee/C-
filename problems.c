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



/*#include <stdio.h>
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
}*/

#include <stdlib.h>
/*int main() {
    int i, last = -1;
    char str[100], ch;



    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character you want to find: ");
    scanf("%c", &ch);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            last = i;
        }
   if (last == -1)
       printf("Character not found!");
   else
       printf("Last occurence at index %d", last);

        return 0;
    }
}*/

/*#include <stdio.h>
int main() {
char s1[10];
    printf("Enter a string: ");
    fgets(s1);
    printf("you entered: %s\n", s1);
    return 0;

}*/




#include <stdio.h>
int main() {
    int n;
    int minutes, hours, seconds;
    printf("Enter time in seconds: ");
    scanf("%d", &n);
    hours = n / 3600;
    minutes = n / 60;
    printf("Time in hours: %d\n", hours);
    printf("Time in minutes: %d\n", minutes);

    return 0;

}

