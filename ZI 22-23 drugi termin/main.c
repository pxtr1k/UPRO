int playRollTheDice(int noOfDiceSides, int diceStartNumber, int noOfRolls)
{
    int scoreFirstPlayer = 0, scoreSecondPlayer = 0;
    for (int i = 0; i < noOfRolls; i++)
       scoreFirstPlayer += (rand() % noOfDiceSides + 1) * diceStartNumber;

    for (int i = 0; i < noOfRolls; i++)
       scoreSecondPlayer += (rand() % noOfDiceSides + 1) * diceStartNumber;

    if (scoreFirstPlayer > scoreSecondPlayer)
        return 1;
    else if (scoreSecondPlayer > scoreFirstPlayer)
        return 2;
    else
        return 0;
}
