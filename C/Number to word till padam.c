// Program for Number to Word in c from zero to padam

#include<stdio.h>
#include<string.h>

void toWord(int,int);
char * getPositionValue(int);
char * digitToWord(int);

char  word[100][30];
int i =0;

int main(){

    int j,k,subnumer;
    unsigned long int number;

    printf("Enter any postive number: ");
    scanf("%lu",&number);
   
    if(number ==0){
         printf("Zero");
         return 0;
    }

    while(number){

         if(i==1){
             toWord(number %10,i);
             number = number/10;
         }else{
             toWord(number %100,i);
             number = number/100;
         }

         i++;
        
    }

    printf("Number in word: ");
    *word[i-1] = *word[i-1] - 32;
    for(j=i-1;j>=0;j--){
         printf("%s",word[j]);
    }

    return 0;

}

void toWord(int number,int position){

    char  numberToword[100]={" "};

    if(number ==0){
    }else if (number < 20 ||number %10==0){
         strcpy(numberToword,digitToWord(number));
    }else{
         strcpy(numberToword,digitToWord((number/10)*10));
         strcat(numberToword,digitToWord(number%10));
    }
   
    strcat(numberToword,getPositionValue(position));
    strcpy(word[i],numberToword);
}

char * getPositionValue(int postion){

    static char positionValue[10]=" ";
   
    switch(postion){

         case 1: strcpy(positionValue,"hundreds "); break;
         case 2: strcpy(positionValue,"thousand "); break;
         case 3: strcpy(positionValue,"lakh "); break;
         case 4: strcpy(positionValue,"crore "); break;
         case 5: strcpy(positionValue,"arab "); break;
         case 6: strcpy(positionValue,"kharab "); break;
         case 7: strcpy(positionValue,"neel "); break;
         case 8: strcpy(positionValue,"padam "); break;
    }
    
    return positionValue;
}

char * digitToWord(int digit){

     static char digitInWord[10]=" ";

    switch(digit){
         case 1: strcpy(digitInWord , "one "); break;
         case 2: strcpy(digitInWord , "two "); break;
         case 3: strcpy(digitInWord , "three "); break;
         case 4: strcpy(digitInWord , "four "); break;
         case 5: strcpy(digitInWord , "five "); break;
         case 6: strcpy(digitInWord , "six "); break;
         case 7: strcpy(digitInWord , "seven "); break;
         case 8: strcpy(digitInWord , "eight "); break;
         case 9: strcpy(digitInWord , "nine ");break;
         case 10: strcpy(digitInWord , "ten "); break;
         case 11: strcpy(digitInWord , "eleven "); break;
         case 12: strcpy(digitInWord , "twelve "); break;
         case 13: strcpy(digitInWord , "thirteen "); break;
         case 14: strcpy(digitInWord , "fourteen "); break;
         case 15: strcpy(digitInWord , "fifteen "); break;
         case 16: strcpy(digitInWord , "sixteen "); break;
         case 17: strcpy(digitInWord , "seventeen "); break;
         case 18: strcpy(digitInWord , "eighteen "); break;
         case 19: strcpy(digitInWord , "nineteen "); break;
         case 20: strcpy(digitInWord , "twenty "); break;
         case 30: strcpy(digitInWord , "thirty "); break;
         case 40: strcpy(digitInWord , "fourty "); break;
         case 50: strcpy(digitInWord , "fifty "); break;
         case 60: strcpy(digitInWord , "sixty "); break;
         case 70: strcpy(digitInWord , "seventy "); break;
         case 80: strcpy(digitInWord , "eighty "); break;
         case 90: strcpy(digitInWord,"ninety "); break;
    }
   
    return digitInWord;
}