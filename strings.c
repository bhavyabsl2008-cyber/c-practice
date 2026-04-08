#include <stdio.h>
void reverseString(char str[]){
    int left = 0;
    int right = 0;
while (str[right] != '\0') right++;
right--;
    while (left<right){
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }
}

int main(){
    char str[100];
printf("Enter a word: ");
scanf("%s", str);
    
    printf("Before: %s\n",str);
    reverseString(str);
    printf("After: %s\n",str);
    return 0;
}