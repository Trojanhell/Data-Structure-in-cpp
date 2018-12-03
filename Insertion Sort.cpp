//Insertion sort
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int a[20], size, i, j, temp;
	
	cout<<"\nEnter Array Size:""\n";
	cin>>size;
	
	cout<<"\nEnter array Elements:"<<"\n";
	
	for(i=0;i<size;i++)
	{
		cin>>a[i];
	}
	
	for(i=1;i<size;i++)
	{
		temp = a[i];
		j = i-1;
		
		while(j>=0 && a[j]>temp)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
	}
	cout<<"\nArray after insertion sort:";
	for(i=0;i<size;i++)
	{
		cout<<"\n"<<a[i]<<" ";
	}
	return 0;
}
