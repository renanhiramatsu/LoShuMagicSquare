//
//  Player.h
//  Lab6_LoShuMagicSquare
//
//  Created by Renan Silva Hiramatsu on 2019/03/11.
//  Copyright © 2019 Renan Silva Hiramatsu. All rights reserved.
//

#ifndef Player_h
#define Player_h
#include "LoShuSquare.h"

class Player : public LoShuSquare
{
private:
    int num1, num2, num3;
    
public:
    using LoShuSquare::LoShuSquare;
    Player(LoShuSquare);
    void interaction();
    
    
};

Player::Player(LoShuSquare) { interaction(); };

void Player::interaction()
{

    cout << "Insert 3 values respectivelly (one at a time) to fill the 1st column: ";
    cin >> num1 >> num2 >> num3;
    fill(0,0,num1);
    fill(0,1,num2);
    fill(0,2,num3);
    

    cout << "Insert 3 values respectivelly (one at a time) to fill the 2nd column: ";
    cin >> num1 >> num2 >> num3;
    fill(1,0,num1);
    fill(1,1,num2);
    fill(1,2,num3);

    cout << "Insert 3 values respectivelly (one at a time) to fill the 3rd column: ";
    cin >> num1 >> num2 >> num3;
    fill(2,0,num1);
    fill(2,1,num2);
    fill(2,2,num3);


    printSquare();
    checkGrid();
    
}


#endif /* Player_h */
