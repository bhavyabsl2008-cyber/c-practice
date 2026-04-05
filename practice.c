#include <stdio.h>
void swap(int *a, int *b) {
    printf("Value of a inside swap: %p\n", a);
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 5, y = 10;
    printf("Before swap: x = %d, y = %d\n",x,y);
    printf("Address of x: %p\n",&x);
    printf("Address of y: %p\n",&y);
    swap(&x,&y);
    printf("After swap: x = %d, y = %d\n",x,y);
    
    
    return 0;
}
