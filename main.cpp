//	Program to find Most Occurred Element in an Array
//	T(n) = O(n^2)
/***********************************************************************************
							@@@@@( Description )@@@@@

	Take first element of Array and compare with all the elements after it. If match
	found, count it in a variable. Each time when match found, increment the variable.
	After complete iteration for finding match for 1st element, at last consider
	the value of counter as most occurrence and first element as most occrred element.
	
	After internal loop, compare the counter with occurence, if counter > occurrence,
	then get element at ith index as most occurred.

	Repeat the above steps for the second element in array, if occurrence of second
	element is greater than first element's occurrence then overwrite the most occurred
	element and most occurrence

	Similarly the above steps for all the elements in the array.

**************************************************************************************/

#include<iostream>
#include<string>
using namespace std;


void main()
{
	int arr[10];


	cout << "Enter 10 Elements of Array (Space Separated) : ";
	for (int i = 0; i < 10; i++)
		cin >> arr[i];

	int size = 10;


	int mostOccur = -1;
	int occurence = -1;
	int counter = 0;


	// Find Most Occurrence
	for (int i = 0; i < size-1; i++)
	{
		counter = 1;

		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] == arr[j])
				counter++;
		}


		if (counter > occurence)
		{
			occurence = counter;
			mostOccur = arr[i];
		}
	}


	// Output
	cout << "Most Occured Element : " << mostOccur << endl;
	cout << "Occurence : " << occurence << endl;

}