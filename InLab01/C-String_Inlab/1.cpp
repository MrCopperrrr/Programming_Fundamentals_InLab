//1
int find(char str[], char substr[]) {
    int str_len = strlen(str); 
    int substr_len = strlen(substr); 

    for (int i = 0; i <= str_len - substr_len; ++i) {
        bool giong = true;
        for (int j = 0; j < substr_len; ++j) {
            if (str[i + j] != substr[j]) {
                giong = false; 
                break;
            }
        }
        if (giong) {
            return i; 
        }
    }
    return -1;
}