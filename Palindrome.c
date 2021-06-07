#include <stdio.h>
#include <string.h>

int main(){
    char string[20];
    int i, length,flag = 0;
    
    // Use to enter the number 
    printf("Enter a Number or Value -");
    scanf("%s", string);
    
    // use to cechk the leng of given Input
    length = strlen(string);
    
    // For loop is use to cechk whther the string length is matching the criteria or not
    for(i=0;i < length ;i++){
        if(string[i] != string[length-i-1]){
            flag = 1;
            break;
   }
}
    // Use a if else sttemnt to print the output
    if (flag) {
        printf("%s Is not a palindrome", string);
    }    
    else {
        printf("%s Is a palindrome", string);
    }
    return 0;
}