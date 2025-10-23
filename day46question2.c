#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0}; 
    int i, index;
    
    printf("Enter a string: ");
    gets(str); 

    for(i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            index = str[i] - 'a';
            freq[index]++;

            if(freq[index] == 2) {  
                printf("First repeating lowercase alphabet: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating lowercase alphabet found.\n");
    return 0;
}
