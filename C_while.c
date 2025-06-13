#include <stdio.h>

int main(){
    int num=3;
    while (num>3){
        printf("%d\n",num);
        num--;
    }
    printf("Launching rocket\n");
    int i=3;
    do{
        printf("%d\n",i);
        i--;
    }while (i>3); 
    int n;
    for(n=0;n<10;n=n+2){
        printf("%d\n",n);
    }
}
// In do while, the loop always runs atleast once
// in while loop, the loop only runs if the condition is true