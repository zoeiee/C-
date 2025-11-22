/*#include <stdio.h>
#include <string.h>
struct Students {
    int roll_no;
    char name[30];
    float cgpa;
};

struct Car {
    char brand[30];
    char model[30];
    int year;
};

int main() {
    struct Students s1;
    s1.roll_no = 45;
    strcpy(s1.name, "Aditi");
    s1.cgpa = 8.5;
    printf("Roll no is: %d\n", s1.roll_no);
    printf("Name is: %s\n", s1.name);
    printf("CGPA is: %f\n", s1.cgpa);




        struct Car car1 = {"BMW", "X5", 1999};
        struct Car car2 = {"Ford", "Mustang", 1969};
        struct Car car3 = {"Toyota", "Corolla", 2011};

        printf("%s %s %d\n", car1.brand, car1.model, car1.year);
        printf("%s %s %d\n", car2.brand, car2.model, car2.year);
        printf("%s %s %d\n", car3.brand, car3.model, car3.year);



    return 0; */

/*#include <stdio.h>
int main() {
    int a[100], i, n, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++ )
        sum += a[i];
    printf("Sum of the elements of the array is: %d ", sum);
    return 0;
}*/

/*#include <stdio.h>

int main() {
    int a[100], n, i, max;

    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    max = a[0];
    for(i = 1; i < n; i++)
        if(a[i] > max)
            max = a[i];

    printf("Largest = %d", max);
    return 0;
}*/

/*#include <stdio.h>
int main() {
    char str[100];
    int i, count = 0;
    printf("Enter the string: ");
    fgets(str, 100, stdin);

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
            count++;
    printf("Vowels = %d", count);



    return 0;
} */
/*#include <stdio.h>
#include <string.h>
int main () {
    char str[100], rev[100];
    int i, len;
    printf("Enter string: ");
    fgets(str, 100, stdin);

    len = strlen(str);
    for (i = 0; i < len; i++) {
        rev[i] = str[len- i - 1];
        rev[len] = '\0';
    }
    printf("Reversed = %s", rev);
    return 0;
} */
/*#include <stdio.h>
struct Student {
    int roll_no;
    char name[20];
    float score;
};
int main() {
struct Student s;
    scanf("%d", &s.roll_no);
    scanf("%s", s.name);
    scanf("%f", &s.score);

    printf("%d %s %f", s.roll_no, s.name, s.score);
    return 0;
}*/

/*#include <stdio.h>
int main() {
    int a[10][10], b[10][10], c[10][10];
    int i,j,m,n;

    for (i=0; i < m; i++);
         for (j=0; j < n; j++);
              scanf("%d", &a[i][j]);

    for (i=0; i < m; i++);
         for (j=0; j < n; j++);
            scanf("%d", &b[i][j]);

    for (i=0; i < m; i++);
          for (j=0; j < n; j++);
          c[i][j] = a[i][j] + b[i][j];

    for (i=0; i < m; i++);
          for (j=0; j < n; j++);
    printf("%d", c[i][j]);
return 0;
}*/
/*#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);

    if (n % 2 == 0)
        printf("The number is even.");
    else (printf("The number is odd."));
    return 0;
}*/

/*#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter a: \n");
    scanf("%d", &a);
    printf("Enter b: \n");
    scanf("%d", &b);
    printf("Enter c: \n");
    scanf("%d", &c);

    if (a > b && a > c)
        printf("a is the largest.");
    if (b > a && b > c)
        printf("b is the largest.");
    else if (printf("c is the largest."))

    return 0;
}*/

/*#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    switch (c) {
        case 'a':
            printf("Vowel");
            break;
        case 'e':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        case 'A':
            printf("Vowel");
            break;
        case 'E':
            printf("Vowel");
            break;
        case 'I':
            printf("Vowel");
            break;
        case 'O':
            printf("Vowel");
            break;
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }
    return 0;
}*/

/*#include <stdio.h>
int main() {
    int n;
printf("Enter marks: ");
    scanf("%d",&n);

    if (n <= 100 && n >= 90)
        printf("Your grade is A");
    else if (n < 90 && n >= 80)
        printf("Your grade is B");
    else if (n < 80 && n >= 70)
        printf("Your grade is C");
    else (printf("You have unfortunately failed!"));

    return 0;
}*/

/*#include <stdio.h>
int main() {
    int n;
printf("Enter a number: ");
    scanf("%d",&n);
    if (n > 0)
        printf("Positive numbers\n");
    else if (n == 0)
        printf("0\n");
    else printf("Negative numbers\n");

    return 0;
}*/

/*#include <stdio.h>
int main() {
    char op;
    float a, b;
    scanf("%c %f %f", &op, &a, &b);

    switch (op) {
        case '+':
            printf("%f", a + b);
            break;
        case '-':
            printf("%f", a - b);
            break;
        case '*':
            printf("%f", a * b);
            break;
        case '/':
            printf("%f", a / b);
            break;
        default: printf("Invalid operator");

    }

    return 0;
}*/

/*#include <stdio.h>
int main() {
    int y;
    scanf("%d", &y);

    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        printf("It is a leap year.\n");
    else
        printf("It is not a leap year.\n");

return 0;

}*/

#include <stdio.h>
int main() {
 char c;
    scanf("%c",&c);
    if (c>='A' && c <= 'Z')
        printf("Uppercase");
    else if (c>='a' && c <= 'z')
        printf("Lowercase");
    else if (c>='0' && c<='9')
        printf("Digit");

    return 0;
}
