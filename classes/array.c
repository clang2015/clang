#include <stdio.h>

int foo() {

}

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
    for(i = 0; i < sizeof(parray) / sizeof(char *); i++){
        printf("%s\n", parray[i]);
    }
    return 0;
}