#include <iostream>
#include <string>
#include <vector>


const std::string SPADE = "\u2660";
const std::string DIAMOND = "\u2666";
const std::string CLUBS = "\u2663";
const std::string HEART = "\u2665";
   
    
int rank; // this may cause problems if you use this value elsewhere; when you initialize an integer without a value and call on it it can cause undefined behavior, which means the compiler picks any place in memory it wants and spits it out as rank (this is bad)
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
    std::vector<Card> deck;
    std::vector<Card> discard;
    public:
        Deck() {
            for(int r = 1; r <= 13; r++) {
                Card spade(r, SPADE);
                Card heart(r, HEART);
                Card club(r, CLUBS);
                Card diamond(r, DIAMOND);
                deck.push_back(spade);
                deck.push_back(heart);
                deck.push_back(club);
                deck.push_back(diamond);
            }   
        }

        Deck(std::vector<Card> newDeck) {
            deck.swap(newDeck);
            newDeck.clear();
            discard.clear();
        }

        void shuffle() {
            std::vector<Card> temp;
            while(deck.size() > 0) {
                int randIndex = (int)(rand() % deck.size());
                Card card = deck[randIndex];
                deck.erase(deck.begin() + randIndex);
                temp.push_back(card);
            }
        }

        Card drawCard() {
            Card nextCard = deck[0];
            deck.erase(deck.begin());
            if(deck.empty()) {
                return;
            }
            else {
                return nextCard;
            }

        }

        void discardDeck(Card card) {
            for(int i = 0; i < deck.size();i++) {
                if(deck[i].getRank() == card.getRank() && deck[i].getSuit().compare(card.getSuit())) {
                    deck.erase(deck.begin());
                }
            }
            discard.push_back(card);
        }
};

int main() {

}
