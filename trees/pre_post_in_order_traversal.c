#include<stdio.h>
#include<malloc.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node * create(int value){
    
    struct node * n = malloc(sizeof(struct node));
    
    n -> data = value;
    n -> left = NULL;
    n -> right = NULL;

    return n;

}

struct node * search(struct node* root, int key){
    if(root==NULL){
        return NULL;
    }
    if(key==root->data){
        return root;
    }
    else if(key<root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

void PreOrder(struct node * root){
    
    if(root != NULL){
        printf("%d -> ", root -> data);
        PreOrder(root -> left);
        PreOrder(root -> right);
    }
}

void PostOrder(struct node * root){
    
    if(root != NULL){
       
        PostOrder(root -> left);
        PostOrder(root -> right);
         printf("%d -> ", root -> data);
    }
}


void InOrder(struct node * root){
    
    if(root != NULL){
       
        InOrder(root -> left);
        printf("%d -> ", root -> data);
        InOrder(root -> right);
         
    }
}
   // Finally The tree looks like this:
    //      5
    //     / \
    //    3   6
    //   / \
    //  1   4  

int main (){

    struct node *p = create(5);
    struct node *p1 = create(3);
    struct node *p2 = create(6);
    struct node *p3 = create(1);
    struct node *p4 = create(4);

    p -> left = p1;
    p -> right = p2;
    p1 -> left = p3;
    p1 -> right = p4;

    PreOrder(p);
    printf("\n");
PostOrder(p);
printf("\n");
InOrder(p);
printf("\n");
   struct node* n = search(p, 18);
    if(n!=NULL){
    printf("Found: %d", n->data);
    }
    else{
        printf("Element not found");
    }
    return 0;
}