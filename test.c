#include <stdio.h>

int func(int a, int b);

int main(int argc, char const *argv[])
{
    /* code */
    printf("hello world!\n");
    int c = func(3, 4);
    printf("end:%d\n", c);
    return 0;
}


int func(int a, int b){
    int result = a + b;
    return result;
}


