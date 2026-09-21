// Lorena Ruiz (A10191832)
// A06-Switch-enum-Chinese-zodiac.cpp

// formula for converting year to chinese zodiac animal
// year - 4 % 12 = remainder of the year when divided by 12
// match the remainder to the corresponding animal in the Chinese zodiac cycle

/*
Remainder | Animal
0         | Rat
1         | Ox
2         | Tiger
3         | Rabbit
4         | Dragon
5         | Snake
6         | Horse
7         | Goat
8         | Monkey
9         | Rooster
10        | Dog
11        | Pig
*/

#include <iostream>
using namespace std;

int main ()
{

int year; 
int remainder;
enum chineseZodiac {Rat, Ox, Tiger, Rabbit, Dragon, Snake, Horse, Goat, Monkey, Rooster, Dog, Pig};

cout << "Enter the year you were born: ";
cin >> year;

remainder = (year - 4) % 12;

switch (remainder)
{
    case 0:
        cout << "You were born in the year of the Rat." << endl;
        break;
}





}