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

