#include <iostream>
#include <string>
#include <cctype>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <ctime>
using namespace std;



const string boardOne = " ------|\n |     |\n       |\n       |\n       |\n    -------\n\n";
const string boardTwo = " ------|\n |     |\n 0     |\n       |\n        |\n    -------\n\n";
const string boardThree = " ------|\n |     |\n 0     |\n |     |\n       |\n    -------\n\n";
const string boardFour = " ------|\n |     |\n 0     |\n-|     |\n       |\n    -------\n\n";
const string boardFive = " ------|\n |     |\n 0     |\n-|-    |\n       |\n    -------\n\n";
const string boardSix = " ------|\n |     |\n 0     |\n-|-    |\n  \\    |\n    -------\n\n";
const string boardSeven = " ------|\n |     |\n 0     |\n-|-    |\n/ \\    |\n    -------\n\n";

int main()
{
  char game;
  cout << "Play? y/n (lowercase) " << endl;
  cin >> game;

  while (game!='n')
  {
    srand(time(0));

    const string wordList[15] = { "cat", "dog", "man", "leg", "fox", "hat", "eat", "log", "zap", "the", "fog", "can", "owl", "fin", "hot" };

    string word = wordList[rand() % 15];


    int wrongGuess = 0;
    char letterGuess = 0;
    int answer;
    string checkWord = "***";


    cout << "Time to guess a letter!" << endl;
    cout << "\n" << boardOne << checkWord << endl;

    while (wrongGuess != 6)
    {
      cout << "\nEnter a letter to guess: ";
      cin >> letterGuess;
      cout << "You guessed the letter: " << letterGuess << endl;

      int position = word.find(letterGuess, 0);
      answer = position + 1;
      string letter (1, letterGuess);


        if (answer == 1)
        {
            cout << "\n Your letter is in the word!" << endl;
            checkWord.replace(0,1,letter);
            if (wrongGuess == 0)
                cout <<  "\n" << boardOne << "\n" << checkWord << endl;
            if (wrongGuess == 1)
                cout << "\n" << boardTwo << "\n" << checkWord << endl;
            if (wrongGuess == 2)
                cout << "\n" << boardThree << "\n" << checkWord << endl;
            if (wrongGuess == 3)
                cout << "\n" << boardFour << "\n" << checkWord << endl;
            if (wrongGuess == 4)
                cout << "\n" << boardFive << "\n" << checkWord << endl;
            if (wrongGuess == 5)
                cout << "\n" << boardSix << "\n" << checkWord << endl;
            if (wrongGuess == 6)
                cout << "\n" << boardSeven << "\n" << checkWord << endl;
                if (checkWord==word)
                  {
                    cout << "Congratulations! You guessed the word!" <<endl;
                    cout << "Play again? y/n (lowercase) " << endl;
                    cin >> game;
                    break;
                  }
        }
        else if (answer == 2)
        {
            cout << "\n Your letter is in the word!" << endl;
            checkWord.replace(1,1,letter);
            if (wrongGuess == 0)
                cout <<  "\n" << boardOne << "\n" << checkWord << endl;
            if (wrongGuess == 1)
                cout << "\n" << boardTwo << "\n" << checkWord << endl;
            if (wrongGuess == 2)
                cout << "\n" << boardThree << "\n" << checkWord << endl;
            if (wrongGuess == 3)
                cout << "\n" << boardFour << "\n" << checkWord << endl;
            if (wrongGuess == 4)
                cout << "\n" << boardFive << "\n" << checkWord << endl;
            if (wrongGuess == 5)
                cout << "\n" << boardSix << "\n" << checkWord << endl;
            if (wrongGuess == 6)
                cout << "\n" << boardSeven << "\n" << checkWord << endl;
                if (checkWord==word)
                  {
                    cout << "Congratulations! You guessed the word!" <<endl;
                    cout << "Play again? y/n (lowercase) " << endl;
                    cin >> game;
                    break;
                  }
        }
        else if (answer == 3)
        {
            cout << "\n Your letter is in the word!" << endl;
            checkWord.replace(2,1,letter);
            if (wrongGuess == 0)
                cout <<  "\n" << boardOne << "\n" << checkWord << endl;
            if (wrongGuess == 1)
                cout << "\n" << boardTwo << "\n" << checkWord << endl;
            if (wrongGuess == 2)
                cout << "\n" << boardThree << "\n" << checkWord << endl;
            if (wrongGuess == 3)
                cout << "\n" << boardFour << "\n" << checkWord << endl;
            if (wrongGuess == 4)
                cout << "\n" << boardFive << "\n" << checkWord << endl;
            if (wrongGuess == 5)
                cout << "\n" << boardSix << "\n" << checkWord << endl;
            if (wrongGuess == 6)
                cout << "\n" << boardSeven << "\n" << checkWord << endl;
                if (checkWord==word)
                  {
                    cout << "Congratulations! You guessed the word!" <<endl;
                    cout << "Play again? y/n (lowercase) " << endl;
                    cin >> game;
                    break;
                  }
        }
        else
        {
          wrongGuess++;
          cout << "\n" << letterGuess << " is not in the word." << endl;
          if (wrongGuess == 0)
              cout <<  "\n" << boardOne << "\n" << checkWord << endl;
          if (wrongGuess == 1)
              cout << "\n" << boardTwo << "\n" << checkWord << endl;
          if (wrongGuess == 2)
              cout << "\n" << boardThree << "\n" << checkWord << endl;
          if (wrongGuess == 3)
              cout << "\n" << boardFour << "\n" << checkWord << endl;
          if (wrongGuess == 4)
              cout << "\n" << boardFive << "\n" << checkWord << endl;
          if (wrongGuess == 5)
              cout << "\n" << boardSix << "\n" << checkWord << endl;
            if (wrongGuess == 6)
            {
              cout << "\n" << boardSeven << "\n Game over! The word was " << word << "!" <<"\n \n Play again? y/n (lowercase) " << endl;
              cin >> game;
            }
          }
        }
      }
    }
