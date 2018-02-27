#include<iostream.h>
void main()
{
	int large, arr[5], size, i;
	cout<<"Enter Array Size";
	cin>>size;
	cout<<"Enter array ";
	for(i=0; i<size; i++)
	{
		cin>>arr[i];
	}
	cout<<"Searching for largest number";
	large=arr[0];
	for(i=0; i<size; i++)
	{
		if(large<arr[i])
		{
			large=arr[i];
		}
	}
	cout<<"Largest Number = "<<large;
	getch();
}
