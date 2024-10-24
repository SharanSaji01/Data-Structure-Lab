#include<stdio.h>
int main(){
	int a[10],n,i,item,flag=0;
	printf("Program for linear search\n");
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&item);
	for(i=0;i<n;i++){
		if(a[i]==item){
			printf("Item found at position %d\n",i+1);
			flag=1;
			break;
		}
	}
	if(!flag){
		printf("Item not found\n");
	}
	return 0;
}
