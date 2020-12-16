
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int add(int a,int b){
    return a+b;
}
int sub(int a,int b){
    return a-b;
}
int multi(int a, int b){
    return a*b;
}
int divide(int a, int b){
    return a/b;
}
int (*calculate[4])(int,int)={add,sub,multi,divide};
char operator[4]={'+','-','*','/'};
int main(){
    int a,b,op,ans;
    srand(time(NULL));
    char next='y';
    while(next=='y'||next=='Y'){
        op=rand()%4;
        a=rand()%11;
        b=op==3? rand()%10+1: rand()%11;
        printf("%d %c %d = ",a,operator[op],b);
        scanf("%d",&ans);
        printf(calculate[op](a,b)==ans? "回答正确！":"回答错误！");
        printf("再来一题？[y/n] ");
        getchar();
        scanf("%c", &next);
    }
    return 0;
}