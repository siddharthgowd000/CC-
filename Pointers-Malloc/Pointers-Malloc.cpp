#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* merge_alternatively(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char* result = malloc((len1 + len2 + 1) * sizeof(char));
    int max_len = (len1 > len2) ? len1 : len2;
    int i, j = 0;

    for (i = 0; i < max_len; i++) {
        if (i < len1) {
            result[j++] = str1[i];
        }
        if (i < len2) {
            result[j++] = str2[i];
        }
    }
    result[j] = '\0';
    return result;
}

int main() {
    char str1[100];
    char str2[100];
    char* output;

    printf("Enter str1: ");
    scanf("%s", str1);
    printf("Enter str2: ");
    scanf("%s", str2);

    output = merge_alternatively(str1, str2);
    printf("%s\n", output);

    free(output); // Free the allocated memory
    return 0;
}
