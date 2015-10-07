#include <stdio.h>

int foo(int a) {
    while (1) {
        break;
    }
    return a + 3;
}

struct IterStru {
    int finished;
};

int main(int argc, char ** argv) {
    int array[2] = {1, 2};
    char * parray[3] = {"123", "456", ""};
    int len = 10, i = 0;
    printf("%p\n", &array);
    printf("%p\n", &parray);
    printf("%p\n", &len);
    printf("%p\n", &i);
    for (; i < sizeof (array) / sizeof (int); i++) {
        printf("%d\n", array[i]);
    }
    foo(100);
    for (i = 0; i < sizeof (parray) / sizeof (char *); i++) {
        printf("%s\n", parray[i]);
    }
    return 0;
}