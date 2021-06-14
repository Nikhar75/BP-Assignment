//Wildcard Pattern Matching using Start 

#include <stdio.h>
#include <string.h>
 
#define Len 100
 
int lookup[Len][Len];
 
// Function that matches an input string with a given wildcard pattern
int isMatching(char str[], char pattern[], int n, int m)
{
    // If both the input string and pattern reach their end, return true
    if (m < 0 && n < 0) {
        return 1;
    }
 
    // If only the pattern reaches its end, return false
    else if (m < 0) {
        return 0;
    }
 
    // If the remaining characters in the pattern are all `*`
    else if (n < 0)
    {
        for (int i = 0; i <= m; i++)
        {
            if (pattern[i] != '*') {
                return 0;
            }
        }
 
        return 1;
    }
 
    if (lookup[m][n] == -1)
    {
        if (pattern[m] == '*')
        {
            
            lookup[m][n] = isMatching(str, pattern, n - 1, m) ||
                        isMatching(str, pattern, n, m - 1);
        }
        else {
   
            if (pattern[m] != '?' && pattern[m] != str[n]) {
                lookup[m][n] = 0;
            }
       
            else {
                lookup[m][n] = isMatching(str, pattern, n - 1, m - 1);
            }
        }
    }
 
    return lookup[m][n];
}
 
int main(void)
{
    char str[] = "xyzzzxy";
    char pattern[] = "x**x?";
 
    memset(lookup, -1, sizeof(lookup));
 
    if (isMatching(str, pattern, strlen(str) - 1, strlen(pattern) - 1)) {
        printf(" Given Patter is Match");
    }
    else {
        printf("Given Patter Not Match");
    }
 
    return 0;
}
