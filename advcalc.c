#include"headers3.h"
void advanced_calculator(){
    if(up==1){
    int skip(int x,int y){
    int i;
  i=x;
     for(int i=1;i<=x;i++){
if(i%y!=0){
    printf("%i \t",i);
}
  }

return i;
}
    }
    else if(up==2){
        void calculator(){
  printf("\n1.Addition \n2.Substraction \n3.Multiplication");
}
void cinema(){
    int userpick;
    printf("please choose your ticket");
    scanf("%i",&userpick);
  if(userpick==1){
            printf("\n normal ticket 50 LE");
        }
        else if(userpick==2){
            printf("\n vip ticket");
        }
        else if(userpick==3){
            printf("\n vip+pop corn");
        }
}
void calc(int num,int userpick){

    if(num==1){
    calculator();
    }
    else if(num==2){
        cinema();
    }
}

    }}
