// lab_03.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char* argv[])

{
	int arr[1],a;
	cin >> a;
	
	const int array_size = 1000;

	int array1[array_size]; 
	for (int counter = 0; counter < array_size; counter++)
	{
		array1[counter] = rand()%100-49; 
		cout << array1[counter] << " " ; 
	}
	cout << endl ;
	int count = 0;
	for (int counter = 1; counter < array_size; counter++ )
	{
		if ( a == array1[counter]) 
			count++;
	}
	cout << endl << count * 1.0 / array_size << "% imovirnost poiavu zadanogo chisla" << endl ;
		;
	


	system("pause");
	return 0;
}