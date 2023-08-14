#include <stdio.h>
#include <string.h>

int areAnagrams(const char str1, const char str2) {
    int count[256] = {0};
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        return 0; // Different lengths, not anagrams
    }

    for (int i = 0; i < len1; i++) {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0; // Characters count mismatch, not anagrams
        }
    }

    return 1; // Anagrams
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if (areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}

