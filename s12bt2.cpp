#include<stdio.h>
void inmag(int array[],int n){
	for(int i=0;i<n;i++){
		printf("%d",array[i]);
	}
	printf("\n");
}
int main(){
	int array[]={3,1,5,7,2};
	int n=sizeof(array)/sizeof(array[0]);
	inmag(array,n);
	return 0;
	
}
