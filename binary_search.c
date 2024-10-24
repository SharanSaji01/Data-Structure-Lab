#include<stdio.h>
int main(){
	int a[10],n,i,item,mid,low,high,flag=0;
	printf("Program for binary search\n");
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the array elements in sorted order : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&item);
	low=0;
	high=n-1;
	while(low<=high){
		mid=low+(high-low)/2;
		if(item==a[mid]){
			printf("Item found at position %d\n",mid+1);
			flag=1;
			break;
		}else if(item < a[mid]){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	if(!flag){
		printf("Item not found\n");
	}
	return 0;
}

