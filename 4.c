#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char **argv, const char **envp) {
    argc = 8;
    argv = 12;
    envp = 10;

    int c = -412;
    c = c - 432;
    int esp424 = 7;
    int esp420 = 64;
    int esp428 = 0;
    return 0;
}

void f(int a, int esp420, int esp424, int esp10) {
    if (a < esp420) {
        f1;
    }
    a = esp424;
    int esp8 = a;
    a = esp420;
    int esp4 = a;
    a = &esp10;
    printf("%d", a);
}

void f1(int a, int esp420) {
    a = esp420;
    a+=1
    int d = &a;
    a = esp420;
    d = 4 * a + 14;
    esp420 += 1;
}