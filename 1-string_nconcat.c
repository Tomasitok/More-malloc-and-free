#include "main.h"
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    if(s1 == NULL)
    {
        s1 = "";
    }

    if(s2 == NULL)
    {
        s2 = "";
    }
    unsigned int len1 = strlen(s1);
    unsigned int len2 = strlen(s2);

    if(n >= len2)
    {
        n = len2;
    }

    char *result = (char *)malloc((len1 + n + 1) * sizeof(char));

    if(result == NULL)
    {
        return NULL;
    }

    memcpy(result, s1, len1);
    memcpy(result + len1, s2, n);
    result[len1 + n] = '\0';

    return result;
}