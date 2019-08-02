#include <stdio.h>

/*加法*/
int funcAdd(int a, int b);

/*减法*/
int funcSub(int a, int b);


int main(int argc, char const *argv[])
{
    /* code */
    printf("hello world!\n");

    int c = funcAdd(4, 3);
    printf("\nadd:%d\n", c);

    int d = funcSub(4, 3);
    printf("\nsub:%d\n", d);

    return 0;
}


int funcAdd(int a, int b){
    int result = a + b;
    return result;
}

int funcSub(int a, int b){
  int result = a - b;
  return result;
}


