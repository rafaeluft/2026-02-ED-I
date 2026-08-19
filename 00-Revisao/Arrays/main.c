#include<stdio.h>
#define MAX 10


int main(){
    int V[MAX], i, x;
    for(i=0;i<MAX;i++){
        scanf("%d", &V[i]);
    }
    scanf("%d", &x);

    for(i=0;i<MAX;i++){
        if(V[i] % x == 0)
            printf("%d ", V[i]);
    }

    return 0;
}
