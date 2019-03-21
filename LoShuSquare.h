/* - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * -
 
 CIS 22B
 
 Lab6: This program receives input from user to insert in a 3x3 LoShuSquare.
       It also checks if the grids are a Lo Shu Square.
 
 Created by Renan Silva Hiramatsu on 2019/03/11
 
 * - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * - */

#ifndef LoShuSquare_h
#define LoShuSquare_h

using namespace std;

class LoShuSquare
{
private:
    static const unsigned int ROW = 3;
    static const unsigned int COLUMN = 3;
    
protected:
    int square[ROW][COLUMN];
    
    
public:
    LoShuSquare()
        : square{{0,0,0},{0,0,0},{0,0,0}} {}
    
    void printSquare();
    void fill(int row, int column, int num);
    void checkGrid();
    
};

// Implementation

void LoShuSquare::fill(int row, int column, int num)
{
    square[row][column] = num;
}

void LoShuSquare::checkGrid()
{
        
    // Sum columns
    int cNum1, cNum2, cNum3;

    
    cNum1 = square[0][0] + square[1][0] + square[2][0];
    cNum2 = square[0][1] + square[1][1] + square[2][1];
    cNum3 = square[0][2] + square[1][2] + square[2][2];
    
    // Sum rows
    int rNum1, rNum2, rNum3;

    rNum1 = square[0][0] + square[0][1] + square[0][2];
    rNum2 = square[0][1] + square[1][1] + square[2][1];
    rNum3 = square[2][0] + square[2][1] + square[2][2];
    
    // Sum diagonals
    int dNum1, dNum2;
    
    dNum1 = square[0][0] + square[1][1] + square[2][2];
    dNum2 = square[2][0] + square[1][1] + square[0][2];
    
    if (cNum1 == cNum2 && cNum3 == rNum1 && rNum2 == rNum3 && dNum1 == dNum2)
        cout << "It is a Lo Shu Square." << endl;
    else
        cout << "It is not a Lo Shu Square." << endl;
    
}

void LoShuSquare::printSquare()
{
    
    for (int row = 0; row < sizeof(ROW) - 1; row++)
    {
        
        for (int column = 0; column < sizeof(COLUMN) - 1; column++)
        {
            cout << square[row][column] << " ";
        }
        cout << endl;
    }
}

/*

Welcome to Lo Shu Square game!
Insert 3 values respectivelly (one at a time) to fill the 1st column: 4
9
2
Insert 3 values respectivelly (one at a time) to fill the 2nd column: 3
5
7
Insert 3 values respectivelly (one at a time) to fill the 3rd column: 8
1
6
4 9 2
3 5 7
8 1 6
It is a Lo Shu Square.
Program ended with exit code: 0

 */


#endif /* LoShuSquare_h */
