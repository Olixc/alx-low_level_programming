#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char *username;
    char *key;
    int i, len, sum, xor, c;

    if (argc != 2)
    {
        printf("Usage: %s username\n", argv[0]);
        exit(1);
    }

    username = argv[1];
    len = strlen(username);
    key = malloc(len + 1);
    if (key == NULL)
    {
        fprintf(stderr, "Can't malloc space for key\n");
        exit(1);
    }

    key[0] = username[0] ^ 0x3b;
    sum = key[0];
    for (i = 1; i < len; i++)
    {
        key[i] = username[i] ^ sum;
        sum += key[i];
    }
    key[i] = '\0';

    printf("%s\n", key);
    free(key);
    return (0);
}
