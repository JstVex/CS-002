//
// Created by Hein Htet Lu Lu on 25/11/2023.
//

#include "functions.h"

void chp6ProgrammingProject2()
{
    std::ifstream fin;
    std::ofstream fout;
    std::string name;

    fin.open("input.txt");
    fout.open("output.txt");

    if(fin.fail())
    {
        std::cout << "Cannot open file";
        exit(1);
    }

    if(fout.fail())
    {
        std::cout << "Cannot open file";
        exit(2);
    }

    computeAverage(fin, fout);

    std::cout << "Averages calculated and written to output.txt\n";

    fin.close();
    fout.close();

}

void computeAverage(std::ifstream &fin, std::ofstream &fout)
{
    std::string lastName, firstName;
    int quizScore = 0;
    double average;

    while (fin >> lastName >> firstName) {
        average = 0.0;

        fout << lastName << " " << firstName;

        int numScores = 0;
        for (int i = 0; i < 10; ++i) {
            fin >> quizScore;
            fout << " " << quizScore;
            average += quizScore;
            numScores++;
        }

        average /= numScores;

        fout << " " << average << std::endl;
    }
}