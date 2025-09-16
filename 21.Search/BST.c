#include <stdio.h>
#include <stdlib.h>

typedef struct tree{
    struct tree *left;
    int data;
    struct tree *right;
}node;

void addtree(node**ptr,int n);
void post_order(node*ptr);
void pre_order(node*ptr);
void in_order(node*ptr);
node* search(node*ptr,int n);

int main(){
    node *root = NULL;
    char ch;
    do{
        int data;
        scanf("%d",&data);
        addtree(&root,data);
        printf("y To continue: ");
        scanf(" %c",&ch);
    }while( ch == 'y');
    post_order(root);
    printf("\n");
    pre_order(root);
    printf("\n");
    in_order(root);
    printf("\n");

    int n;
    printf("Enter the Data to search ");
    scanf("%d",&n);
    node *ptr = search(root,n);
    printf("%p %d",ptr,ptr->data);
}

void addtree(node**ptr,int n){
    //only create the node *ptr is NULL
    if(*ptr == NULL){
        node *temp = (node*)malloc(sizeof(node));
        temp->data = n;
        temp->left = NULL;
        temp->right = NULL;
        *ptr = temp;
    }
    else if(n < (*ptr)->data){
        //The next Address of the call is left side node address
        addtree(&(*ptr)->left,n);
    }
    else{
         //The next Address of the call is right side node address
        addtree(&(*ptr)->right,n);
    }
}

void pre_order(node*ptr){
    if (ptr != NULL) {
        printf("%d ",ptr->data);
        pre_order(ptr->left);
        pre_order(ptr->right);
    }
}

void post_order(node*ptr){
    if (ptr != NULL) {
        pre_order(ptr->left);
        pre_order(ptr->right);
        printf("%d ",ptr->data);
    }
}

void in_order(node*ptr){
    if (ptr != NULL) {
        pre_order(ptr->left);
        printf("%d ",ptr->data);
        pre_order(ptr->right);
    }
}

node* search(node*ptr,int n){
    if (ptr == NULL) {
        return NULL;
    }

    if (n == ptr->data) {
        return ptr;
    }
    else if(n < ptr->data){
        //move left
        return search(ptr->left,n);
    }
    else{
        //move right
        return search(ptr->right,n);
    }
}
