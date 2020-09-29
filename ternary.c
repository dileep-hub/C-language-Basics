#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 12, b = 45;
    int c;
    c = (a>b) ? b : a;      /// if a > b  it prnt b else a  "?" acts as true or false
    printf("ans = %d", c);  /// 12 will be the ans
    return 0;
}
