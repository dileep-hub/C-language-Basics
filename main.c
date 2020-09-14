#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m_array[5] = {1,2,3,4,5};  /// here [5]--> no of elements and {---} are the elements
    int my_array = m_array[2];
    printf("value = %d \n", my_array);

    for (int i = 0; i < 5; i++)
    {
        printf("element[%d] = %d \n", i, m_array[i]);
    }
}
