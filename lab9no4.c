#include<stdio.h> //finish commit2 but not sure if it's right

void swapValue(int *a, int *b, int *c);
void swapArray(int *a, int *b, int size);

int main(){
	
	int a = 1, b = 2, c = 3;
	printf("Before swap function: a=%d, b=%d, c=%d\n", a, b, c);
	swapValue( &a,&b,&c );
	printf("After swap function: a= %d, b=%d, c=%d\n", a, b, c);
	printf("\n");
	
	int arr[5]={1,2,3,4,5}, brr[5]={6,7,8,9,10}, i;
	printf("Before swap array:\n");
	printf("arr = ");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("brr = ");
	for(i=0;i<5;i++){
		printf("%d ",brr[i]);
	}
	printf("\n");
	swapArray(arr,brr,5);
	printf("After swap array:\n");
	printf("arr = ");
	for(i=0;i<5;i++){
		printf("%d ",arr[i]); 
	}
	printf("\n");
	printf("brr = ");
	for(i=0;i<5;i++){
		printf("%d ",brr[i]);
	}
	
	return 0;
}

void swapValue(int *a, int *b, int *c){
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
};

void swapArray(int *a, int *b, int size){
    int i, temp;
    for (i = 0; i < size; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
	}
}; 



