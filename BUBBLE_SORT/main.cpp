#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
	//create array
	int size,temp,counter;
	cout<<"Enter size of array: ";
	cin>>size;
	int array[size];
	//take array values from user
	for(int i=0; i<size; i++)
	{
		cout<<"Enter value: ";
		cin>>array[i];

	}
	//display the unsorted array
	cout<<"Unsorted Array: ";
	for(int i=0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	//we write a loop for unsortd array to sort the given array
	counter=1;
	while(counter<size)
	{
		for(int i=0; i<size-counter; i++)
		{
			if(array[i]>array[i+1])
			{
				temp=array[i];
				array[i]=array[i+1];
				array[i+1]=temp;
			}
		}
		counter++;
	}
	//display the sorted array
	cout<<"sorted Array: ";
	for(int i=0; i<size; i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;
	return 0;
}