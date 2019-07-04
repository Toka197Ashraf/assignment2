#include"headers5.h"
void stars1(int line, int star){
for(int line=1;line<=x;line++){
    for(int star=line-1;star>=1;star--){
if(line>=star){
    printf("");
}
    }
    for(int star=1;star<=x;star++){
if(line>=star){
        printf("*");
}
    }
printf("\n");
    }
}

