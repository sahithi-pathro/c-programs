#include <stdio.h>

int main() {
    char ch;
    printf("Enter the character\n");
    scanf("%c",&ch);
    int res=(ch>='a')&&(ch<='z');
    printf("%c is lower case alphabet i.e is:%d",ch,res);
    return 0;
}