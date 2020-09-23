#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter ur age: ");
    scanf("%d", &age);           /// here & is important there only the val of age will will be stored (address)
    if (age > 18) {
        printf("age is greater than 18");
    }
    if (age == 18) {
        printf("age is 18");
    }
    if (age < 18) {
        printf("age less than 18");
    }
    return 0;
}
