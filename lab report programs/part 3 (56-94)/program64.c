//64. Program to count number of times a function executes using static local variable.

#include <stdio.h>

void callCounter()
{
    static int count = 0;   // static local variable

    count++;                // increment each time function runs
    printf("Function executed %d time(s)\n", count);
}

int main()
{
    callCounter();
    callCounter();
    callCounter();
    callCounter();

    return 0;
}