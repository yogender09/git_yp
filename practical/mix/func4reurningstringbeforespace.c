#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool dcd_lib_parse_string_attr(char **parsed, char *string)
{
    const char dem[2] = " ";
    int str_len = 0;
    if(*parsed)
        str_len = strlen(*parsed)+1;
    *parsed = strtok(string+str_len, dem);
    if(!*parsed){
        return false;
    }
    return true;
}

int main()
{
    char *str = NULL;
    char *str1 = "This IS VLAN TAG1 TAG2 TAG3";
    char ptr[100];
    bcopy(str1,ptr,strlen(str1)+1);
    while(1){
        if(dcd_lib_parse_string_attr(&str,ptr))
            printf("%s\n",str);
        else
            break;
    }
    return 0;
}
