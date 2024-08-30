#include<stdio.h>

// void pos_neg(int num){
//     if(num>=0) {printf("postitive number");}
//     else {printf("Negative number");}
// }
void pos_neg(int num){
    if(num==0)printf("Zero");
    else{
    num>0 ? printf("positive"): printf("negative");}
}
int main(){
    int num;
    scanf("%d",&num);
    pos_neg(num);
    return 0;
}