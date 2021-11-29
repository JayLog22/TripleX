#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty;
    std::cout << " secure server room...\nYou need to enter the correct codes to continue...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

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
        std::cout << "\n*** [Access GRANTED] ***\n*** Moving on to the next room ***";
        return true;
    }
    else
    {
        std::cout << "\n*** [Access DENIED] ***\n*** Wrong code, try again ***";
        return false;
    }
}

int main()
{
    srand(time(NULL));
    int Difficulty = 1;
    const int MaxDifficulty = 6;

    while (Difficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(Difficulty);
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++Difficulty;
        }
    }

    std::cout << "\n\nYOU WIN !!";
    return 0;
}
