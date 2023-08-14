#include<stdio.h>
void toprint(char str[]){
    int i=0;
    while(str[i] != 0){
        printf("%c",str[i]);
        i++;
    }
} 

int main(){
    char str[] = {'m','u','d','i','t','\0'} ;
    toprint(str);
    return 0;
}
