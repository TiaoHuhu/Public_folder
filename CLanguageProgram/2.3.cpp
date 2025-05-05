//20250505 判定2000-2500年中的每一年是否为润年,并将其输出
#include <stdio.h>

int output(int year)
{
    int count = 0;
    int i = 0;
    while(year <= 2500)
    {
        if(year%4 == 0 && year%100 != 0)
        {
            printf(" %d ", year);
            i++;
        }
        if(year%400 == 0)
        {    
            printf(" %d ", year);
            i++;
        }
        year++;
    }
    return i;
}

int main()
{
    int year = 2000;
    printf("\n2000-2500%d个润年\n", output(year));

    return 0;
}
