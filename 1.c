#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv, const char **envp) {
    argc = 8;
    argc = argc - 20;
    argc = argc * 5;
    int res = argc * 5;
    res = res + res>>31;
    printf("%d", res);
    res = 0;
    return res;
}