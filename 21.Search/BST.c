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

node*parent = NULL;// global variable to hold the parent address.

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
        parent = NULL;//No Element in found it will make parent to null 
        return NULL;
    }

    if (n == ptr->data) {
        return ptr;
    }
    else if(n < ptr->data){
        //move left
        parent = ptr;//Store the value of parent of finding node
        return search(ptr->left,n);
    }
    else{
        //move right
        parent = ptr;//Store the value of parent of finding node
        return search(ptr->right,n);
    }
}

void delete(node**ptr,int n){
    node* target = search(*ptr,n);

    // Case 1: Node is a leaf (no children)
    if((target->left == NULL) && (target->right == NULL)){
        if(parent->left == target){
            target->left = NULL; //Disconnect from parent's left
        }
        else{
            target->right = NULL; // Disconnect from parent's right
        }
        free(target);
        target = NULL;
        return;
    }

    if((target->left !=NULL) && (target->right == NULL)){
        if(parent->left == target){
            parent-> left = target->left;
        }else{
            parent->left = target->left;
        }
        free(target);
        target = NULL;
        return;
    }

    if((target->left == NULL) && (target->right != NULL)){
        if (parent->left == target)
        {
            parent->left = target->right;
        }else{
            parent->right = target->right;
        }
        free(target);
        target = NULL;
        return;
    }

    if((target->left != NULL) && (target->right != NULL)){
        node* temp = target->left;

        while (temp->right != 0)
        {   
            parent = temp;
            temp = temp->right;
        }

        target->data = temp->data;
        target = temp;

        free(target);
        target = NULL;
        return;
    }
}


//case 1
    /*  
             Before deletion (leaf = 40):

                   20
                  /  \
                 10   30
                       \
                        40   <- target (leaf node)

             After deletion:

                   20
                  /  \
                 10   30
                       \
                        NULL
    */