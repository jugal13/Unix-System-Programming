#include <stdio.h>
int main(int argc,char* argv[])
{
    int op1 = atoi(argv[1]);
    int op2 = atoi(argv[2]);
    char op = argv[3][0];
    int r;
    switch(op)
    {
        case '+': r = op1 + op2;
                  break;
        case '-': r = op1 - op2;
                  break;
        case '*': r = op1 * op2;
            break;
        case '/': r = op1 / op2;
                  break;
        case '%': r = op1 % op2;
                  break;
    }
    printf("Result %d %c %d = %d",op1,op,op2,r);
}