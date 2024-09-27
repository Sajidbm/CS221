unsigned int turn = 1;
unsigned int last_turn = 0;
unsigned int first_score = 0;
unsigned int second_score = 0;


void reset(void) {
    turn = 1;
    last_turn = 0;
    first_score = 0;
    second_score = 0;
}

unsigned int input(int player, unsigned int dice) {
    if (player == turn)  
    {
        // player 1

        if (player == 1) 
        {
            for (int i=0; i < dice; i++) {
                first_score += die_roll();
            }
            if (first_score > 100) {
                turn = 0; // game over, no one can play until reset
                return 2; // player 1 loses the game
            }
        }
        // player 2

        if (player == 2) 
        {
            for (int i=0; i < dice; i++) 
            {
                second_score += die_roll();
            }
            if (second_score > 100) 
            {
                turn = 0; // game over, no one can play until reset
                return 1; // player 
            }
        }

        // last turn
        if (last_turn == 1) 
        {
            turn = 0; // game over, no one can play until reset
            if (first_score > second_score) 
            {
                return 1; // player 1 wins
            } 
            else if (second_score > first_score) 
            {
                return 2; // player 2 wins
            } 
            else 
            {
            return 3;  // draw
            }
        }

        if (dice == 0) // someone passed, so last_turn is initiated by setting it to 1
        {
            last_turn = 1;
        }
    
        turn = 3 - turn; // we start with turn = 1, and unless the player one loses in their given turn, turn switches to 3-1=2, and player 2 can input their choice of dice number 
    }
return 0; 

}