#include <stdio.h>
#include <stdlib.h>

struct student {
    int age;
    char name[20];
    float marks;
};
int main()
 {
    struct student s1 = {18, "Vaani", 87.24};
    printf("name: %s\n", s1.name);
    printf("age: %d\n", s1.age);
    printf("marks: %.2f\n", s1.marks);

    struct student s2 = {20, "Preeti", 92.5};
    printf("name: %s\n", s2.name);
    printf("age: %d\n", s2.age);
    printf("marks: %.2f\n", s2.marks);

    float avg = (s1.marks + s2.marks) / 2;
    printf("Average: %.2f\n", avg);

    return 0;
}
