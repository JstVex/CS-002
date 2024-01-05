//
// Created by Hein Htet Lu Lu on 20/11/2023.
//

#ifndef PROGRAMMING_PROJECT_7_FUNCTIONS_H
#define PROGRAMMING_PROJECT_7_FUNCTIONS_H
#include <fstream>
#include <iostream>
void run();
bool openFile(std::ifstream &fin, const std::string &filename);
void getAnswers(std::ifstream &fin, const std::string &filename, std::string arr[], int size);
std::string getRandomAnswer(const std::string arr[], int size);
std::string getInput();
void output(const std::string &message);
int getLineCount(std::ifstream &fin, const std::string &filename);
void replaceChapterNumber(std::string &sentence, int chapter);
#endif //PROGRAMMING_PROJECT_7_FUNCTIONS_H
