#include <iostream>
#include "quiz.h"
using namespace std;

int main(int argc, char **argv)
{
    int input1, input2, input3, expectedOutput;

    std::cin >> input1 >> input2 >> expectedOutput;

    int studentOutput = calculateSum(input1, input2);

    if (expectedOutput == studentOutput)
    {
        std::cout << "Result " << expectedOutput << " was the correct output";
    }
    else
    {
        std::cout << "Output " << studentOutput << " does not match expected output: " << expectedOutput << endl;
        return 1;
    }

    return 0;
}