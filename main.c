#include <stdio.h>
#include <conio.h>
#include <string.h>


void reverseString(char* word){
int len = strlen(word);
for(int i = len - 1; i >=0; i--){
    printf("%c", word[i]);
}
}


int main(){
    reverseString("Hello, world!");
    getch();
    return 0;
}