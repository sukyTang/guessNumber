#include <iostream>
#include <random> // This is needed for generating random number

/*
step1: print a message to player explaining how to play the game
step2: game engine should pick a random number betweeb the numbers 0 and 100;
step3: Ask player to choose a number.
step4: Compare player's number with the chosen number
    If numbers are equal: print a message: You won! Do you want to play again?
        If player choose to play again, start from step2
    If player's number < chosen number: print a message: too low. Try again
    If player's number > chosen number: print a message: too high. Try again
        then go to step3
*/
int main() {
    //step1:
    std::cout<<"This is game of GuessANumber. I have a hidden number between 0 and \n100. Try to guess this number now.\n";
    //step2:
    int hiddenNumber = std::rand() % 100;
    int playerNumber{}; // declaring player's number
    bool playAgainFlag{false};
    bool playerGuessIncorrect{true};

    while(playerGuessIncorrect){
        std::cout<<"Pick a number: ";
        std::cin>>playerNumber; //step3
        //step4:
        if(playerNumber == hiddenNumber) 
        {
            playerGuessIncorrect = false;
            std::cout<<"Congradulation!! You won! Would you like to play again? (Yes/No)\n";
            std::string response{""};
            std::cin>> response;
            
            if(response == "Yes") {
                playAgainFlag == true;
            }
        } else { // means player's guess was not correct
                if (playerNumber < hiddenNumber) {
                    std::cout<<"Too low! Try again\n";
                }
                else {
                    std::cout<<"Too high! Try again\n";
                }
                playerGuessIncorrect = true;
        }
    }
}
