#include<stdio.h>
/*√∞≈›≈≈–Ú
int main()
{
	int i, j, temp;
	int a[10] = {15,62,4,895,36,75,48,26,28,66};
	for(i = 0; i < 9; i++)
		for(j = 0; j < 9-i; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	for(i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}*/
//≤Â»Î≈≈–Ú
/*int main()
{
	int i, j;
	int a[10] = {15,62,4,895,36,75,48,26,28,66};
	for(i = 2; i < 10; i++)
	{
		a[0] = a[i];
		j = i-1;
		while(a[0] > a[j+1])
		{
			a[j+1] = a[j];
			j = j-1;
		}
	for(i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
		a[j+1] = 0;
	}
	return 0;
}*/
//—°‘Ò≈≈–Ú
/*int main()
{
	int i, j, temp, index;
	int a[10] = {15,62,4,895,36,75,48,26,28,66};
	for(i = 0; i < 10; i++)
	{
		index = i;
		for(j = i+1; j <= 10; j++)
		{
			if(a[i] > a[j])
				index = j;
			if(index != i)
			{
				temp = a[i];
				a[i] = a[index];
				a[index] = temp;
			}

		}
	}
	for(j = 0; j < 10; j++)
		printf("%d ", a[j]);
	printf("\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int i, j, temp, index;
	int a[10] = {15,62,4,895,36,75,48,26,28,66};
	for(i = 0; i < 9; i++)
		for(j = i+1; j <= 9; j++)
		{
			if(a[j] > a[i])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	for(i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}*/
//øÏÀŸ≈≈–Ú
void quicksort (int a[],int first,int end)
{
	int i, j, temp;
	i = first;  
	j = end;  
	temp = a[i];       
	while(i<j)	
    {  
		while (i < j && temp <= a[j]) 
			j--;
		a[i] = a[j]; 

		while (i < j && a[i] <= temp)
			i++;
		a[j] = a[i]; 
	}
	a[i] = temp;
	if (first < i-1)
		quicksort(a, first, i-1); 
	if (i+1 < end) 
		quicksort(a, i+1, end);
}
int main()
{
	int a[10] = {15,62,4,895,36,75,48,26,28,66};
	int i;
	quicksort(a, 0, 9);
	for(i = 0; i < 10; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}