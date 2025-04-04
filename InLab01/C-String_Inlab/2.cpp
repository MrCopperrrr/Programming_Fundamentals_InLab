//2
void printFirstRepeatedWord(char str[]) {
    char* words[1000]; 
    char* token = strtok(str, " "); 
    int num_words = 0; 

    while (token != NULL) {
        words[num_words++] = token;
        token = strtok(NULL, " "); 
    }

    for (int i = 0; i < num_words; ++i) {
        bool repeated = false; 
        for (int j = 0; j < i; ++j) {
            if (strcmp(words[i], words[j]) == 0) {
                repeated = true; 
                break;
            }
        }
        if (repeated) {
            cout << words[i] << endl;
            return;
        }
    }
    cout << "No Repetition" << endl;
}