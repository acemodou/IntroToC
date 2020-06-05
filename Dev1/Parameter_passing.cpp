#include <stdio.h>
#include <cstdlib>

void passbyValue(int a, int b)
{
	// lets swap the a and b
	int temp = a; 
	a = b; 
	b = a;
}

void passbyRefrence(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

/* allocate pointer then initialize */
int heapMem(int *A, int n)
{
	int* ptr;
	ptr = (int*)malloc(n * sizeof(int));
	
	for (int i = 0; i < n; i++)
	{
		ptr[i] = (i * 2) + 1;
		printf("Array is %d : \n",ptr[i]);
	}

	free(ptr);
	return *A;
}


void passbyRefrence(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

struct Test
{
	int A[5];
	int n;

};

int main()
{
	int a = 10;
	int b = 5; 
	//passbyValue(a, b);
	//passbyRefrence(&a, &b);
	//passbyAddress(a, b);
	int arr[] = { 1, 2, 3, 4, 5 };
	//heapMem(arr, 5);
	struct Test t = { 1, 2, 3, 4, 5 };
	printf("Testing Struct %d", t.A[4]);
	
	//printf("Testing parameter passing array = %d ", heapMem(arr,5));
	return 0;
}