#include<stdio.h>

int main(){
    char oldStr[] = "hunulululu";
    char newStr[] = "NewString";

    strcpy(newStr, oldStr);
    puts(newStr);

    return 0;
}