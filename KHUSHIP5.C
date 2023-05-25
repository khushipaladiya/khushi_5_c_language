#include<stdio.h>
#include<conio.h>
void main(){
int A=12;
int B=22;
int C=18;
clrscr();
if(A<B){
  if(A<C){
  printf("A is min....");
  }else{
  printf("C is min....");
  }
}else{
  if(B<C){
  printf("B is min....");
  }else{
  printf("C is min....");
  }
}
getch();
}

