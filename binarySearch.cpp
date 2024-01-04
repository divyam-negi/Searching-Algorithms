#include<stdio.h>
int main(){
	int size,key;
	printf("enter the size of the array: ");
	scanf("%d", &size);
	int arr[size];
	printf("enter the elements in the array: ");
	for(int i=0;i<size;i++){
		scanf("%d", &arr[i]);
	}
	printf("\n");
	printf("enter the element to search: ");
	scanf("%d", &key);
	int l=0,r=size-1,mid,found=0;
	while(l<=r){
		mid=(l+r)/2;
		
		if(arr[mid]==key){
			printf("element %d is found at index %d",key,mid);
			found=1;
			break;
		}
		else if(arr[mid]<key){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	if(!found){
		printf("element is not present here!");
	}
	
	return 0;
}
