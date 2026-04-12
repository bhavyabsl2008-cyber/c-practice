#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insertAtEnd(struct Node* *head, int value){
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->next=NULL;
    struct Node *current = *head;
    while(current->next != NULL){
        current = current->next;
    }
    current->next = newNode;
}
int main(){
    struct Node *first = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    
    first->data=10;
    second->data=20;
    third->data=30;

    first->next=second;
    second->next=third;
    third->next=NULL;
    insertAtEnd(&first, 40);
insertAtEnd(&first, 50);

    struct Node *current = first;
while(current != NULL){
    printf("%d ", current->data);
    current = current->next;
    
}

    return 0;
}