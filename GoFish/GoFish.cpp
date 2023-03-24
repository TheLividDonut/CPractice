#include <iostream>
#include <string>
#include <vector>

    const std::string SPADE = "\u2660";
    const std::string DIAMOND = "\u2666";
    const std::string CLUBS = "\u2663";
    const std::string HEART = "\u2665";
    std::vector<Card> deck;
    std::vector<Card> discard;

    int rank;
    std::string suit;

class Card {
public:
    Card(int rank, std::string suit) {
        int rank = rank;
        std::string suit = suit;
    }
    int getRank() {
        return rank;
    }
    std::string getSuit() {
        return suit;
    }
    void setRank(int r) {
        rank = r;
    }
    void setSuit(std::string s) {
        suit = s;
    }
    std::string toString() {
        std::string str = "";
        str += std::to_string(rank) + suit;
        return str;
    }
    int compareTo(Card card)
    {
        if (card.getRank() == rank)
        {
            if (suit.compare(card.getSuit()) == 0) {
                return 0;
            }
            else if (suit.compare(SPADE) == 0) {
                return 1;
            }
            else if (card.getSuit().compare(SPADE) == 0) {
                return -1;
            }
            else if (suit.compare(HEART) == 0) {
                return 1;
            }
            else if (card.getSuit().compare(HEART) == 0) {
                return -1;
            }
            else if(suit.compare(DIAMOND) == 0) {
                return 1;
            }
            else if (card.getSuit().compare(DIAMOND) == 0) {
                return -1;
            }
            else {
                return -1;
            }
        }
        else {
            return rank - card.getRank();
        }
    }
};
class Deck {
    Deck() {
       for(int r = 1; r <= 13; r++) {
        Card *spade = new Card(r, SPADE);
        Card *heart = new Card(r, HEART);
        Card *club = new Card(r, CLUBS);
        Card *diamond = new Card(r, DIAMOND);
        deck.push_back(spade);
        deck.push_back(heart);
        deck.push_back(club);
        deck.push_back(diamond);
       } 
    }
    Deck(std::vector<Card> newDeck) {
        deck.swap(newDeck);
    }
    void shuffle() {
        std::vector<Card> temp;
        while(deck.size() > 0) {
            int randIndex = (int)(rand() % deck.size());
            Card card = deck[randIndex];
            deck.erase(deck[randIndex]);
            temp.push_back(card);
        }
    }
};

int main() {

}