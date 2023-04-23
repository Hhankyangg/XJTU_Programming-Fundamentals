#include <stdio.h>
#include <string.h>

#define LEN_STR 100

int main() {
    // input the str
    char str[2*LEN_STR];
    scanf("%s", str);

    // split till not star
    char tmp[LEN_STR];
    if (str[0] != '*') {
        printf("%s", str);
    }
    else {
        sscanf(str, "%[*]", tmp);
        int len_of_star = strlen(tmp);

        strcat(str, tmp);
        
        // print
        printf("%s", str+len_of_star);
    }
    
    return 0;
}