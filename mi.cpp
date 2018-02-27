#include<iostream.h>
void main()
{
	clrscr();
	int min, arr[5], size, i;
	cout<<"Enter Array Size";
	cin>>size;
	cout<<"Enter array";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Searching for min";
	min=arr[0];
	for(i=0; i<size; i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	cout<<"min of value"<<min
	getch();
}
