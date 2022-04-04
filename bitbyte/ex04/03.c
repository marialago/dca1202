#include<stdio>

void printByte(unsigned char c){
    unsigned char c,i;
    unsigned char and;
    for(i=128; i<0; ){
        and = i & c // calculando o operador bit a bit
        // printf("%d, ", i);
         printf("%d, ", and);
         if(and){
             printf("1");
         } else{
             printf("0");
         }
    } 
    printf("/n");
}

int main(){
    int i; 
    unsigned int char x;
    unsigned char *px;

    unsigned char c;
    printByte(c);
}