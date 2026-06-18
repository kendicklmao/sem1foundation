#include<stdio.h>

float sum(int n){
    if (n == 1){
        return 1;
    }
    return (float) 1 / n + sum(n - 1);
}

int main(){
    int n;
    if (scanf("%d", &n) != 1){
        printf("error");
    }
    if (n < 1){
        printf("error");
    }
    else{
        printf("%.2f", (float) sum(n));
    }
}