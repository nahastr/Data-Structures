#include <stdio.h>
#include <stdlib.h>
int stack[100],size,choice,top=-1,value,i;
void push();
void pop();
void display();
void main(){

	printf("enter the limit of array: ");
	scanf("%d",&size);
	printf("1.push\n2.pop\n3.display\n");

	do{
	printf("select the operation wants to perform\n");
	scanf("%d",&choice);

	switch(choice){
					case 1: push();
							break;
					case 2: pop();
							break;
					case 3: display();
							break;
					default: printf("invalid choice!");
							break;
	}
	}while(choice!=4);


}
void push(){
	if(top==size-1){
		printf("STACK OVERFLOW-unable to insert..\n");
	}
	else{
		printf("enter the element want to insert:\n");
		scanf("%d",&value);
		top++;
		stack[top]=value;

	}
}
void pop(){
	if(top==-1){
		printf("STACK UNDERFLOW-unable to delete\n");
	}
	else{
	    stack[top]=NULL;
		top--;
	}
}
void display(){
	if(top>=0){
		for(i=top;i>=0;i--){
				printf("%d \t",stack[i]);
		}
	}
	else{
		printf("nothing to show in array\n");
	}
}
