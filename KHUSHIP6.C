#include<stdio.h>
#include<conio.h>
void main(){
int A=50;
int B=25;
int C=75;
int D=60;
clrscr();
if(A>B){
    if(A>C){
    printf("A is max...");
    }else{
    printf("C is max...");
    }
}else if(B>C){
     if(B>D){
     printf("B is max...");
     }else{
     printf("D is max...");
     }
}else{
printf("C is max...");
}
getch();
}