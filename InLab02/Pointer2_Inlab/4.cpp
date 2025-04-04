 char* concatStr(char* str1, char* str2) {
    int len1 = 0, len2 = 0;
    while (str1[len1] != '\0') len1++;
    while (str2[len2] != '\0') len2++;

    char* combine_str = new char[len1 + len2 + 1];
    for (int i = 0; i < len1; i++) combine_str[i] = str1[i];
    for (int i = 0; i < len2; i++) combine_str[i + len1] = str2[i];
    combine_str[len1 + len2] = '\0';

    return combine_str;
}