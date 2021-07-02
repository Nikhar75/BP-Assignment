// Palintrom Program in C

#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    int i, l,j = 0;
    
    // Use to enter the number 
    printf("Enter a Number or Value -");
    scanf("%s", string);
    
    // Check the length of given input
    l = strlen(string);
    
    // For loop is use to cechk wethher the string length is matching criteria or not
    for(i=0;i < l ;i++){
        if(string[i] != string[l-i-1]){
            j = 1;
            break;
   }
}
    // Use if else statemnt to print the required output
    if (j) {
        printf("%s Is not a palindrome", string);
    }    
    else {
        printf("%s Is a palindrome", string);
    }
    return 0;
}