#include<stdio.h>

int main(){
    int x, y, a, b, c;
    scanf("%d %d %d %d %d", &x, &y, &a, &b, &c);
    if(x<=0 || x>1000000 || y<=0 || y>x || y>1000000){
        printf("Error\n");
    }
    if(a<0 || b<0 || c<0 || a>100000 || b>100000 || c>100000){   
        printf("Error\n");
    }
    int res = a+b+c;
    if(res>=x){
        printf("Chill guy\n");
    }
    else if(res>=y){
        printf("Who knows\n");
    }
    else{
        printf("A bad day\n");
    }
}