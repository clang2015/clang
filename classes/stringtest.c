#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char ** argv){
    char * s = NULL;
    if (s == NULL){
        printf("s is null\n");
    }
    s = "abc";
    printf("length of s is %d\n", strlen(s));
    char * nums = "123";
    char cbuf[1024] = {0};
    printf("string [%s] to number [%d]\n", nums, atoi(nums));
    char * a = "a", * b = "b";
    char buf_a[100] = {0};
    char buf_b[100] = {0};
    int ia;
    snprintf(cbuf, sizeof(cbuf), "%d_%s_%s", 1, a, b);
    printf("拼接后的字符串为[%s]\n", cbuf);
    sscanf(cbuf, "%d_%[a-z]_%[a-z]", &ia, buf_a, buf_b);
    printf("拆解后的字符串为[%d] [%s] [%s]\n", ia, buf_a, buf_b);
    return 0;
}