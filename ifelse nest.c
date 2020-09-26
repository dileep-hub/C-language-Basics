#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Plz enter ur age: ");
    scanf("%d", &age);
    if (age > 18) {
        printf("age is greater then 18 \t");   /// \t for tab space
        if (age > 21) {
            printf("age is greater than 21");     /// this is nested one
        } else {
        printf("age is less than 21");
        }
    } else if (age == 18) {
        printf("age is 18");
    } else {
        printf("age is less than 18");
    }
    return 0;
}
