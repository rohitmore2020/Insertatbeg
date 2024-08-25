#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void insertatbeg(struct node** p) {
    struct node* newp = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of the new node that you want to insert: ");
    scanf("%d", &newp->data);
    newp->next =  *p;
     *p = newp;
}

int main() {
    int n;
    printf("Enter the number of nodes  to insert in the linked list: ");
    scanf("%d", &n);

    struct node* p = (struct node*)malloc(sizeof(struct node));
    printf("Enter the data of the first node of the linked list: ");
    scanf("%d", &p->data);
    p->next = NULL;
    struct node* temp = p;

    int num = 1;
    while (num < n) {
        struct node* newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the data of the new node: ");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        temp->next = newnode;
        temp = temp->next;
        num++;
    }

    printf("Here is our linked list:\n");

    temp = p;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    
    insertatbeg(&p);

    printf("New linked list after the insertion:\n");

    temp = p;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}







