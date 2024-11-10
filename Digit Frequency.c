//purpose: given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.
//date: 11/09/24
//author: ab1point55v

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char s[1000];
    int freq[10] = {0};  //initialize int array called freq with a size of 10 to 0's. freq[1]=0..., freq[9]=0

    scanf("%[^\n]", s); 
    for (int i = 0; i < strlen(s); i++) {  //strlen() is a function in string.h library that takes the size of a string
        if (s[i] >= '0' && s[i] <= '9') {  //sets a range for 0-9 digits only
            freq[s[i] - '0']++;  //ex. freq[1]= '3'. '3' - '0' = 3 (integer not string anymore) basically by subtracting zero to a character gives us an integer value. check ASCII.
        }  //as for the line 19, it increments if a digit is encountered one or more times.
    }

    for (int i = 0; i < 10; i++) {  //prints out every element from freq. 
        printf("%d ", freq[i]);
    }  
    return 0;
}
