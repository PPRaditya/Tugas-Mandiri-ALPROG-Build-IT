#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char input[1005];             
    char words[305][75];          
    int count = 0;

   
    fgets(input, sizeof(input), stdin);

    
    input[strcspn(input, "\n")] = '\0';

    
    char *token = strtok(input, " ");
    while (token != NULL) {
        strcpy(words[count], token);
        count++;
        token = strtok(NULL, " ");
    }

   
    for (int i = 0; i < count; i++) {
        bool duplicate = false;

        
        for (int j = 0; j < i; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            if (i > 0) printf(" ");  
            printf("%s", words[i]);
        }
    }

    printf("\n");
    return 0;
}
