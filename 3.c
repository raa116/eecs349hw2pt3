#include <stdio.h>
#include <stdlib.h>

int f1(int a) {
    if (a < 999) {
        return f2(a);
    }
    return 0;
}

int f2(int a) {
    int c = a;
    int d = 1347389535;
    c = c * d;
    d = 3;
    c = 3607772532;
    d = d>>5;
    a = c;
    a = a>>31;
    d = d - a;
    d = a * -64;
    c = &a;
    d = 66666667;
    a = c * d;
    d = d>>2;
    a = a>>2;
    d = d - a;
    a - d;
    d = 6666667
    a = 64;
    a = a * d;
    d = d>>2;
    a = c;
    a = a>>31;
    d = d - a;
    a = d;
    a = a>>2;
    a = a + d;
    a = a + a;
    c = c - a;
    a = c;
    a = 0;
    a = a * 0;
    a = a * 0;
    a = a + d;
    if (a != 0) {
        return f3;
    } else {
        a = 0;
        printf("%d", a);
    }
    return 0;
}

void f3(int a) {
    a = 1;
}

int main(int argc, const char **argv, const char **envp) {
    argc = argc - 20;
    int a = 64;
    printf("%d", f1(a));
    return 0;
}