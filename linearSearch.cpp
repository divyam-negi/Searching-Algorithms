#include<stdio.h>
int main(){
	int arr[10]={2,1,4,11,22,65,34,12,8,9};
	int element;
	printf("enter the element: ");
	scanf("%d", &element);
	int found=0;
	for(int i=0;i<10;i++){
		if(arr[i]==element){
			printf("element is found at index: %d", i);
		found=1;
		break;
		}
	}
	if(found==0){
		printf("element not found");
	}
	return 0;
}
