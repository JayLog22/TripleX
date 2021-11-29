#include <iostream>

void PlayGame()
{
    std::cout << "You are a secret agent breaking into a secure server room...\n";
    std::cout << "You need to enter the correct codes to continue...\n\n";

    const int CodeA = 4;
    const int CodeB = 7;
    const int CodeC = 3;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    std::cout << "+ There are 3 numbers in the code \n";
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give: " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if guess is correct
    if (CodeSum == GuessSum && CodeProduct == GuessProduct)
    {
        std::cout << "\n[Access GRANTED]";
    }
    else
    {
        std::cout << "\n[Access DENIED]";
    }
}

int main()
{
    PlayGame();
    return 0;
}
