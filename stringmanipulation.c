//purpose: given a sentence, , print each word of the sentence in a new line.
//date: 11/09/24
//author: abv1point55v

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;    //special variable called pointer.
    s = malloc(1024 * sizeof(char));    //using the malloc func it allocates size for string with 1024 size.
    scanf("%[^\n]", s);    //this line of code accepts string user input as long as no newline (\n) character is encountered. Basically accept a whole sentence.
    s = realloc(s, strlen(s) + 1);    //re-allocates memory size using strlen() function +1 because of \0 after the user input to reduce memory size.
    
    for(int i=0; s[i]!= '\0'; i++){    //first exp: initialize index to zero, second exp: as long as s is not null or nothing/ 0 it will itereate. cant believe i have to explain everything.
        
        printf("%c", s[i]);    //prints every single character from the sentence.
        if(s[i]==' '){    //if s  is a whitespace it will print \n, the purpose of the code
            printf("\n");
        }
    }
    return 0;    //good practice.
}
