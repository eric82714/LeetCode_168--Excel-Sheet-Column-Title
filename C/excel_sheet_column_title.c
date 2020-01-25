char * convertToTitle(int n){
    char* title = malloc(100 * sizeof(char));
    int index = 0;
        
    while(n > 0) {
        title[index] = (char)('A' + ((n-1) % 26));
        n = (n-1) / 26;
        index ++;
    }
    title[index] = '\0';
    
    for (int i = 0; i < index / 2; i++) {
        char temp = title[index - i - 1];
        title[index - i - 1] = title[i];
        title[i] = temp;
    }
    
    return title;
}
