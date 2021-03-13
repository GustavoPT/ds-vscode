// sudoku2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <thread>
#define N 9
using namespace std;



int grid[N][N] = {
   {3, 0, 6, 5, 0, 8, 4, 0, 0},
   {5, 2, 0, 0, 0, 0, 0, 0, 0},
   {0, 8, 7, 0, 0, 0, 0, 3, 1},
   {0, 0, 3, 0, 1, 0, 0, 8, 0},
   {9, 0, 0, 8, 6, 3, 0, 0, 5},
   {0, 5, 0, 0, 9, 0, 6, 0, 0},
   {1, 3, 0, 0, 0, 0, 2, 5, 0},
   {0, 0, 0, 0, 0, 0, 0, 7, 4},
   {0, 0, 5, 2, 0, 6, 3, 0, 0}
};

//bool isPresentInCol(int col,int )
// orint ne box 
// print one row 
// print one col 
// 
////////////////////////////////

void printBox(int[][]){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 
    }
}

int main()
{
    // print the box 
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i == 3 || i == 6 || i == 8) {
				cout << "" << endl;
			}
			else {
				cout << grid[i][j];
			}
		}
	}

    ////
    std::cout << "Hello World!\n"; 
}

// Run /////////////////////////////////////////////program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
