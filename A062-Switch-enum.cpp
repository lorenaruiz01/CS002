// Lorena Ruiz (A10191832)
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

chineseZodiac zodiac = static_cast<chineseZodiac>(remainder);

switch (zodiac)
{
    case Rat:
        cout << "You were born in the year of the Rat." << endl;
        cout << "The Rat is quick-witted, resourceful, versatile, and kind." << endl;
        break;
    case Ox:
        cout << "You were born in the year of the Ox." << endl;
        cout << "The Ox is diligent, dependable, strong, and determined." << endl;
        break;
    case Tiger:
        cout << "You were born in the year of the Tiger." << endl;
        cout << "The Tiger is brave, confident, competetive, and unpredictable." << endl;
        break;
    case Rabbit:
        cout << "You were born in the year of the Rabbit." << endl;
        cout << "The Rabbit is quiet, elegant, kind, and responsible." << endl;
        break;
    case Dragon:
        cout << "You were born in the year of the Dragon." << endl;
        cout << "The Dragon is confident, intelligent, and enthusiastic." << endl;
        break;
    case Snake:
        cout << "You were born in the year of the Snake." << endl;
        cout << "The snake is enigmatic, intelligent, and wise." << endl;
        break;
    case Horse:
        cout << "You were born in the year of the Horse." << endl;
        cout << "The Horse is energetic, active, and elegant." << endl;
        break;
    case Goat:
        cout << "You were born in the year of the Goat." << endl;
        cout << "The Goat is gentle, kind, and responsible." << endl;
        break;
    case Monkey:
        cout << "You were born in the year of the Monkey." << endl;
        cout << "The Monkey is sharp, smart, and curious." << endl;
        break;
    case Rooster:
        cout << "You were born in the year of the Rooster." << endl;
        cout << "The Rooster is observant, hardworking, and courageous." << endl;
        break;
    case Dog:
        cout << "You were born in the year of the Dog." << endl;
        cout << "The Dog is loyal, honest, and responsible." << endl;
        break;
    case Pig:
        cout << "You were born in the year of the Pig." << endl;
        cout << "The Pig is compassionate, generous, and diligent." << endl;
        break;
    default:
            cout << "Invalid year." << endl;
    }

    return 0;
}