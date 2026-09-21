// Lorena Ruiz (A10191832)
// A06-Switch-enum-Chinese-zodiac.cpp

// formula for converting year to Chinese zodiac animal
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

int year; // variable to hold the year input by the user
int remainder; // variable to hold the remainder of the year when divided by 12

// variable to hold the corresponding animal in the Chinese zodiac cycle, assigned using an enum type. The first item in the array is assigned to the value index 0, the second item is assigned to the value index 1, and so on. The last item in the array is assigned to the value index 11.
enum chineseZodiac {Rat, Ox, Tiger, Rabbit, Dragon, Snake, Horse, Goat, Monkey, Rooster, Dog, Pig};

cout << "Enter the year you were born: ";
cin >> year;

remainder = (year - 4) % 12;

switch (remainder)
{
    case 0:
        cout << "You were born in the year of the Rat." << endl;
        cout << "The Rat is quick-witted, resourceful, versatile, and kind." << endl;
        break;
    case 1:
        cout << "You were born in the year of the Ox." << endl;
        cout << "The Ox is diligent, dependable, strong, and determined." << endl;
        break;
    case 2:
        cout << "You were born in the year of the Tiger." << endl;
        cout << "The Tiger is brave, confident, competetive, and unpredictable." << endl;
        break;
    case 3:
        cout << "You were born in the year of the Rabbit." << endl;
        cout << "The Rabbit is quiet, elegant, kind, and responsible." << endl;
        break;
    case 4:
        cout << "You were born in the year of the Dragon." << endl;
        cout << "The Dragon is confident, intelligent, and enthusiastic." << endl;
        break;
    case 5:
        cout << "You were born in the year of the Snake." << endl;
        cout << "The snake is enigmatic, intelligent, and wise." << endl;
        break;
    case 6:
        cout << "You were born in the year of the Horse." << endl;
        cout << "The Horse is energetic, active, and elegant." << endl;
        break;
    case 7:
        cout << "You were born in the year of the Goat." << endl;
        cout << "The Goat is gentle, kind, and responsible." << endl;
        break;
    case 8:
        cout << "You were born in the year of the Monkey." << endl;
        cout << "The Monkey is sharp, smart, and curious." << endl;
        break;
    case 9:
        cout << "You were born in the year of the Rooster." << endl;
        cout << "The Rooster is observant, hardworking, and courageous." << endl;
        break;
    case 10:
        cout << "You were born in the year of the Dog." << endl;
        cout << "The Dog is loyal, honest, and responsible." << endl;
        break;
    case 11:
        cout << "You were born in the year of the Pig." << endl;
        cout << "The Pig is compassionate, generous, and diligent." << endl;
        break;
}


}