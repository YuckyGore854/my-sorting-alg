/*
*3/15/2020 
* 
*Welcome to my sorting algorithm.
*My objective with this code is to create an array and to sort it in least to greatest form.
*This code is fairly primitive and unoptimized but this is my first attempt with no previous experience in sorting algorithms
*/

#include<iostream>
#include<array>//needed for the size function

using namespace std;

int main(int argc, char** argv[]) {//these parameters inside main seem to be used for running a program from a command terminal and using main as if it were a custom function
	int values[] = { 4, 6, 2, 8, 34, 1, 4, 2, 9, 74, 0 };//11 numbers in array
	int buffer;//integer used for temporarily storing a value of a number in the array

	cout << "The current values in this array are: ";
	for (unsigned int i = 0; i < size(values); i++) {//iterates through array and prints out each value
		cout << values[i] << " ";
	}
	cout << endl << endl << "The sorted values in this array are: ";
	for (int maxtimesneeded = 0; maxtimesneeded < size(values) - 1; maxtimesneeded++) {//worse case scenario a number needs to move from the last position into the first postion
	//therefore the loop runs the length of the given array -1
	//there are most definetly better ways to optimize the algorithm to stop when it is sorted but this is the simplest way I could think of stopping it

		for (unsigned int i = 0; i < size(values) - 1; i++) {//loop runs as long as the length of the array -1 to avoid overflow
			if (values[i] > values[i + 1]) {//if a number in the array is larger than the next number
				buffer = values[i];//sets the buffer equal to the larger number
				values[i] = values[i + 1];//sets the bigger value equal to the smaller value
				values[i + 1] = buffer;//sets the larger number equal to the buffer
			}

		}

	}
	
	for (int j = 0; j < 11; j++)//iterating through the array one last time
		cout << values[j] << " ";//printing out the now sorted values

	return 0;
}