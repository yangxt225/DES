#include "des.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char key[16];
	memcpy(key,"\x01\x09\x08\x00\x09\x01\x07\x04\x01\x09\x09\x01\x00\x07\x02\x08",16);
    char str[8] = "hello";

    printf("before encrypt...\n");
    printf("str = %s\n", str);
    TripleDes(str, str, key, 1); 
    //des(str, key, 1);
    printf("after encrypt...\n");
    printf("str = %s\n", str);

    TripleDes(str, str, key, 0); 
    //des(str, key, 0);
    printf("after decrypt...\n");
    printf("str = %s\n", str);
    return 0;
}
