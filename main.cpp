/* - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * -
 
 Created by Renan Silva Hiramatsu on 2019/03/11
 
 * - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * -* - * - */

#include <iostream>
#include <unistd.h>
#include "LoShuSquare.h"
#include "Player.h"

using namespace std;

int main() {
   
    cout << "Welcome to Lo Shu Square game!" << endl;
    
    sleep(2);
        
    LoShuSquare game;
    Player newPlayer(game);
    
}
