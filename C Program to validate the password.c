//write a c program to validate the password which has minimum one uppercase,numeric,symbol/spcl character with minimum of 8 and maximum of 15 characters.
//Print whether the password is i.weak  ii.moderate  iii.strong and check whether it is valid or invalid.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
 char password[50];
 int hasUpper=0,hasDigit=0,hasSymbol=0;
 int i,length,score=0;
 printf("Enter password: ");
 scanf("%s",password);
 length=strlen(password);
 if(length<8||length>15) {
    printf("\nResult:INVALID\n");

    printf("Reason: Password must be between 8 amd 15 characters,\n");
    return 0;
 }
 for(i=0;i<length;i++){
    if(isupper(password[i]))hasUpper=1;
    else if(isdigit(password[i]))hasDigit=1;
    else if(!isalnum(password[i]))hasSymbol=1;
 }
        score=hasUpper+hasDigit+hasSymbol;
        printf("\n--Analysis--\n");
        if(!hasUpper||!hasDigit||!hasSymbol){
                printf("STATUS:INVALID\n");
        printf("Missing: ");
        if(!hasUpper)printf("[Uppercase]");
        if(!hasDigit)printf("[Numeric]");
        if(!hasSymbol)printf("[Symbol]");
        printf("\n");
        }else{
        printf("STATUS:VALID\n");
}
if(score==3){
    printf("STRENGTH:STRONG\n");
}else if(score==2){
printf("STREGTH:MODERATE\n");
}else{
    printf("STREGTH:WEAK\n");
}
return 0;
}
