#include <iostream>

void PlayGame() {
    // Namespace.scopeOperator. std namespace
    // Welcome message
    std::cout << "Hacking into a Server\n";
    std::cout << "Enter the correct code to continue\n";
    
    // hardcoded variables
    const int a = 4;
    const int b = 3;
    const int c = 2;

    const int sum = a + b + c;
    const int product = a * b * c;

    // Printing values to terminal
    std::cout << std::endl;
    std::cout << "+ there are 3 numbers in the code\n";
    std::cout << "+ the codes addup to : " << sum;
    std::cout << "\n + the codes multiply to give: " << product << "\n";
 
    // store the players guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    // Goal integers I guess
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    // Some Logic
    if (GuessSum == sum && GuessProduct == product) {
        std:: cout << "You Win!";
    }
    else {
        std::cout << "You Lose!";
    }

}

// A terminal hacker game
int main() {
    PlayGame();
    return 0;
}



