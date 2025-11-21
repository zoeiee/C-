#include <stdio.h>
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



    return 0;
}
