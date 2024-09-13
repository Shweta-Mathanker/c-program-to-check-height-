#include<stdio.h>
int main(){
    int h;
    printf("enter height in  cm:");
    scanf("%i",&h);
    if(h<150){
        printf("dwarf");
    }
    else if(h>150 && h<200){
        printf("average");
    }
    else{
        printf("tall");
    }
    return 0;
}
