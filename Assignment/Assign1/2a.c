#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){

       int input1, input2;

       printf("Enter Input1: ");
       scanf("%d", &input1);

       printf("Enter Input2: ");
       scanf("%d", &input2);

       if (input1>input2){
           int sub = input1 - input2;
           printf("%d\n", sub);
       }
       else if (input1<input2){
           int add = input1+input2;
           printf("%d\n", add);
       }
       else if (input1==input2){
           int mult = input1*input2;
           printf("%d\n", mult);
       }
}
