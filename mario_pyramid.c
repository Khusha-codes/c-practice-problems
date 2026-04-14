#include <cs50.h>
#include <stdio.h>

void triangle(int n);
int height(void);

int main(void){
    int a = height();
    triangle(a);
}

// to get positive height
int height(void){
    int x;
    do{
        x = get_int("Enter height of triangle: ");
    }
    while (x <= 0);
    return x;
}

// to create triangle
void triangle(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++){
            printf(" ");
        }
        for(int k = i; k > 0; k--){
            printf("#");
        }
        printf(" ");
        for(int l = i; l > 0; l--){
            printf("#");
        }
        printf("\n");
    }
}
