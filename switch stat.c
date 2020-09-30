#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks = 93;

    switch (marks)             /// here switch will help to switch to some statment
    {
    case 97:                   /// here for 97 there is no break hence it prints execelent
    case 95:                   ///  " ---------------------------------------------------"
    case 90:
        printf("Execelent");
        break;                 /// here there is a break hence it comes out of loop
    case 75:
    case 70:
        printf("very good");
        break;
    case 60:
        printf("good");
        break;
    case 45:
        printf("ok");
        break;
    default:
        printf("grade unavailable");  /// think we put marks as 93 it comes grade unavailable but it comes execelent if we put 97 as it is mentioned
    }



}
