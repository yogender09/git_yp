#include<stdio.h>
#define TRACE_HEX_STRING_MAXBYTES 4
#define TRACE_HEX_STRING_BUFLEN (TRACE_HEX_STRING_MAXBYTES*3)
static char trace_hex_string_buf[TRACE_HEX_STRING_BUFLEN +1];

int main(){

    char string[] = {8,95,7,6,'\0'};
    char *outptr;
    const char *byte_string;
    int length = TRACE_HEX_STRING_MAXBYTES;

    outptr = trace_hex_string_buf;
    if (length > 0) {

        byte_string = string;
        while (length--) {
//            printf("%x\n",outptr += sprintf(outptr, "%02x ", *byte_string));
            outptr += sprintf(outptr, "%02x ", *byte_string);
            byte_string++;
        }
    }
*outptr = '\0';
//printf("%c\n", string);
printf("%s\n", trace_hex_string_buf);
return 0;
}


