#include <stdio.h>
#include<stdlib.h>
#include<string.h>

union yp{
    char *char_param;
    void *void_param;
};

int main(){
    union yp test;
    char *tmp = "hello";
    test.char_param = malloc(strlen(tmp)+1);
    strncpy(test.char_param, tmp, strlen(tmp)+1);
    printf("%s\n", test.char_param);
    free(test.void_param);
    return 0;
}
