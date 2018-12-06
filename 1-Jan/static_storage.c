#include<stdio.h>

/*function declaration*/
void func(void);

static int count = 5; //global variable

main(){
    while (count--){
         funct();
        }
        return 0;
    }

/*function definition*/
void funct(void){
    static int i = 5; /*local variable*/
    i++;

    printf("i is %d and count is %d\n", i, count);
}
