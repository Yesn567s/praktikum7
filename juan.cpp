#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <random>

// Function to create a deck of 52 cards
std::vector<std::string> generateDeck() {
    std::vector<std::string> deck;
    std::vector<std::string> suits = {"Hearts", "Diamonds", "Clubs", "Spades"};
    std::vector<std::string> ranks = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

    for (const auto& suit : suits) {
        for (const auto& rank : ranks) {
            deck.push_back(rank + " of " + suit);
        }
    }
    return deck;
}

// Function to print the deck
void printDeck(const std::vector<std::string>& deck) {
    for (const auto& card : deck) {
        std::cout << card << "\n";
    }
    std::cout << std::endl;
}

int main() {
    // Generate the deck
    std::vector<std::string> originalDeck = generateDeck();

    // Print the original deck
    std::cout << "Original Deck:\n";
    printDeck(originalDeck);

    // Copy the original deck
    std::vector<std::string> shuffledDeck = originalDeck;

    // Shuffle the deck
    std::random_device rd; // Seed for random number generator
    std::mt19937 g(rd()); // Mersenne Twister RNG
    std::shuffle(shuffledDeck.begin(), shuffledDeck.end(), g);

    // Print the shuffled deck
    std::cout << "Shuffled Deck:\n";
    printDeck(shuffledDeck);

    return 0;
}
