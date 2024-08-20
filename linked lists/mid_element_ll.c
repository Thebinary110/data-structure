#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

int main()
{	
	int a , i = 1 , n , mid;     //   i = 0  is also ok....
	node *p,*q,*head;
	printf("Enter the number of nodes: ");
	scanf("%d",&n);
	
	printf("Enter node %d  \n",i);   //  you can also start with i = 0
	p = (node*)malloc(sizeof(node));
	scanf("%d",&a);
	p->data = a;
	p->next = NULL;
	head = p; 
		
	for(i=2;i<=n;i++)                //if i=0 , then for ( i = 1; i < n; i++ )
	 	{
	 		printf("Enter node %d  \n",i);
		 	q = (node*)malloc(sizeof(node));
			scanf("%d",&a);
			q->data = a;
			q->next = NULL;			 	
		 	p->next = q;
		 	p = p->next;		 	
	 	}

	
	if(n%2==0){
		p = head;
		mid = (n+1)/2;
		for(i=0;i<mid;i++)
		{
		
			p = p->next;
		}
			printf("\t %d", p->data);
	}
	else{
		p = head;
		mid = n/2;
		for(i=0;i<mid;i++)
		{
			
			p = p->next;
		}
		printf("\t %d", p->data);
	}

	// Free the memory
	while(head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}

	return 0;
}