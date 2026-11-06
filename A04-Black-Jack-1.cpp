//Lorena Ruiz
//10191832
//Black Jack Game

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

// Constant for deck size
const int DECK_SIZE = 52;

// Enum for card suits
enum Suit {
    Hearts,
    Clubs,
    Diamonds,
    Spades
};

// Array containing card ranks
const string ranks[13] = {
    "Ace", "Two", "Three", "Four", "Five",
    "Six", "Seven", "Eight", "Nine", "Ten",
    "Jack", "Queen", "King"
};

// Initialize the deck in order
void InitializeDeck(int deck[]) {
    for (int i = 0; i < DECK_SIZE; i++) {
        deck[i] = i + 1;
    }
}

// Shuffle the deck
void ShuffleDeck(int deck[]) {
    for (int i = DECK_SIZE - 1; i > 0; i--) {
        int j = rand() % (i + 1);

        int temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }
}

// Pick and print a card
void PickACard(int cardNumber) {
    int index = cardNumber - 1;

    int rank = index % 13;
    int suit = index / 13;

    cout << ranks[rank] << " of ";

    switch (static_cast<Suit>(suit)) {
        case Hearts:
            cout << "Hearts";
            break;
        case Clubs:
            cout << "Clubs";
            break;
        case Diamonds:
            cout << "Diamonds";
            break;
        case Spades:
            cout << "Spades";
            break;
    }

    cout << endl;
}

// Determine the numerical value of a card
int GetCardValue(int cardNumber) {
    int rank = (cardNumber - 1) % 13;

    if (rank == 0) {
        return 11; // Ace
    }
    else if (rank >= 10) {
        return 10; // Jack, Queen, King
    }
    else {
        return rank + 1;
    }
}

// Calculate the total value of a hand
int CalculateHandValue(int hand[], int cardCount) {
    int total = 0;
    int aceCount = 0;

    for (int i = 0; i < cardCount; i++) {
        total += GetCardValue(hand[i]);

        if (GetCardValue(hand[i]) == 11) {
            aceCount++;
        }
    }

    // Change an Ace from 11 to 1 if necessary
    while (total > 21 && aceCount > 0) {
        total -= 10;
        aceCount--;
    }

    return total;
}

// Deal the next card from the deck
int DealCard(int deck[], int &nextCard) {
    int card = deck[nextCard];

    nextCard++;

    return card;
}

// Display the cards in a hand
void DisplayHand(int hand[], int cardCount,
                 bool hideSecondCard = false) {
    for (int i = 0; i < cardCount; i++) {

        if (hideSecondCard && i == 1) {
            cout << "Hidden card" << endl;
        }
        else {
            PickACard(hand[i]);
        }
    }
}

// Main function that controls the Blackjack game
void PlayBlackjack(int deck[]) {

    // Arrays to store the player's and dealer's cards
    int playerHand[DECK_SIZE];
    int dealerHand[DECK_SIZE];

    // Keep track of the number of cards dealt
    int playerCount = 0;
    int dealerCount = 0;
    int nextCard = 0;

    // Deal two cards to each
    playerHand[playerCount++] = DealCard(deck, nextCard);
    dealerHand[dealerCount++] = DealCard(deck, nextCard);

    playerHand[playerCount++] = DealCard(deck, nextCard);
    dealerHand[dealerCount++] = DealCard(deck, nextCard);

    // Display starting hands
    cout << "\nYour hand:" << endl;
    DisplayHand(playerHand, playerCount);

    cout << "Your total: "
         << CalculateHandValue(playerHand, playerCount) << endl;

    cout << "\nDealer's hand:" << endl;
    DisplayHand(dealerHand, dealerCount, true);

    // PLAYER'S TURN
    char choice;

    while (CalculateHandValue(playerHand, playerCount) < 21) {

        cout << "\nWould you like to Hit or Stand? (H/S): ";
        cin >> choice;

        if (choice == 'H' || choice == 'h') {

            // Deal another card to the player
            playerHand[playerCount++] = DealCard(deck, nextCard);

            cout << "\nYour hand:" << endl;
            DisplayHand(playerHand, playerCount);

            cout << "Your total: "
                 << CalculateHandValue(playerHand, playerCount) << endl;
        }

        else if (choice == 'S' || choice == 's') {
            cout << "\nYou chose to stand." << endl;
            break;
        }

        else {
            cout << "Invalid choice. Enter H or S." << endl;
        }
    }

    // Check if player busted
    if (CalculateHandValue(playerHand, playerCount) > 21) {
        cout << "\nYou busted! Dealer wins!" << endl;
        return;
    }

    // DEALER'S TURN
    cout << "\nDealer's hand:" << endl;
    DisplayHand(dealerHand, dealerCount);

    cout << "Dealer's total: "
         << CalculateHandValue(dealerHand, dealerCount) << endl;

    // Dealer draws until reaching at least 17
    while (CalculateHandValue(dealerHand, dealerCount) < 17) {

        cout << "\nDealer draws a card." << endl;

        dealerHand[dealerCount++] = DealCard(deck, nextCard);

        DisplayHand(dealerHand, dealerCount);

        cout << "Dealer's total: "
             << CalculateHandValue(dealerHand, dealerCount) << endl;
    }

    // DETERMINE THE WINNER
    int playerTotal = CalculateHandValue(playerHand, playerCount);
    int dealerTotal = CalculateHandValue(dealerHand, dealerCount);

    cout << "\nFinal Results:" << endl;
    cout << "Your total: " << playerTotal << endl;
    cout << "Dealer's total: " << dealerTotal << endl;

    if (dealerTotal > 21) {
        cout << "\nDealer busted! You win!" << endl;
    }
    else if (playerTotal > dealerTotal) {
        cout << "\nYou win!" << endl;
    }
    else if (playerTotal < dealerTotal) {
        cout << "\nDealer wins!" << endl;
    }
    else {
        cout << "\nIt's a tie!" << endl;
    }
}

// Main function
int main() {

    // Initialize random number generator
    srand(time(0));

    // Create the deck
    int deck[DECK_SIZE];

    // Initialize the deck
    InitializeDeck(deck);

    // Shuffle the deck
    ShuffleDeck(deck);

    // Start the Blackjack game
    PlayBlackjack(deck);

    return 0;
}