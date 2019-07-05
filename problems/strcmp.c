#include<stdio.h>
#include<string.h>

int cmp(char *c1, char *c2);

int cmp(char *c1, char *c2){
    while(*c1 != '\0' && *c1 != '\0'){
        if(*c1 != *c2){ //Different
            if(*c1 < *c2){
                return -1;
            }
            if(*c1 > *c2){
                return 1;
            }
        }
        c1++; c2++;
    }
    if(*c1 != *c2){
        if(*c1 < *c2){
            return -1;
        }
        if(*c1 > *c2){
            return 1;
        }
    }
    else{
        return 0;
    }
}

int main(){

    char c1[] = "Bruno";
    char c2[] = "bruno";

    printf("%d",cmp(c1,c2));

    return 0;
}