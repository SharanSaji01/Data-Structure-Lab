#include<stdio.h>
#include<stdlib.h>

#define MAX 50

 int queue[MAX],front=-1,rear=-1;
 void enqueue(){
 int elem;
 if(rear==MAX-1){
  	printf(" Queue Overflow!Cannot enqueue more elements ");
  	return;
  	}
  	printf(" Enter the element to be enqueued: ");
  	scanf("%d",&elem);
  if(front==-1){
 	 front=0;
  	}
  	rear++;
  	queue[rear]=elem;
  	printf(" %d enqueued to the queue.\n ",elem);
  	}
  	void dequeue(){
  	if(front==-1||front>rear){
  	printf(" Queue Underflow..! No elements to be dequeued ");
  	return;
  	}
  	printf(" Dequeued element is : %d ",queue[front]);
  	front++;
  	if(front>rear){
  	front=rear=-1;
  	}
  	}
  	void display(){
  	int i;
  	if(front==-1){
  	printf(" Queue is empty.\n ");
  	return;
  	}
  	printf(" Queue elements are:\n ");
  	for(i=front;i<=rear;i++){
  	printf(" %d ",queue[i]);
  	}
  	printf("\n");
  	}
  	int main(){
  	int ch;
  	while(1){
  	printf(" \n Queue Menu \n ");
  	printf(" 1.Enqueue\n ");
  	printf(" 2.Dequeue\n ");
  	printf(" 3.Display\n ");
  	printf(" 4.Exit\n ");
  	printf("Enter your choice\n");
  	scanf("%d",&ch);
  	
  	switch(ch){
  	case 1:
  	enqueue();
  	break;
  	case 2:
  	dequeue();
  	break;
  	case 3:
  	display();
  	break;
  	case 4:
  	exit(0);
  	default:
  	printf("Invalid choice! Please try again.\n");
  	}
  	}
  	return 0;
  	}
  	
  	