#include <stdio.h>
#include <string.h>

char *strrev(char *str, size_t _len) {
    size_t len = _len;
    if(_len == 0) {
        len = strlen(str) - 1;
    }
    for(size_t i = 0;i<len/2;i++) {
        char tmp = str[i];
        str[i] = str[len-i];
        str[len-i] = tmp;
    }
    return str;
}

int main() {
    char test0[] = "one two three";
    strrev(test0, 0);
    printf("'%s'\n", test0);
    char *x = &test0[0];
    while(x != NULL) {
        char *space = strstr(x, " ");
        if(space == NULL) {
            strrev(x, 0);
            break;
        }
        strrev(x, space - x - 1);
        x = space + 1;
    }
    printf("'%s'\n", test0);
    return 0;
}
