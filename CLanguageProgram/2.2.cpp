//20250505 有50个同学,要求输出成绩在80分以上的学生的学号和成绩
#include <stdio.h>

void output(int student[]) //输出函数
{
    int count = 0;
    while(count < 50)
    {
        if (student[count] >= 80) printf(" %d ", student[count]);
        count++;
    }
}

int main()
{
    int student[50] = {90, 80, 88, 60};
    output(student);

    return 0;
}
