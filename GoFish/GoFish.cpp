#include <iostream>
#include <string>
#include <vector>
#include <sstream>


    const std::string SPADE = "\u2660";
    const std::string DIAMOND = "\u2666";
    const std::string CLUBS = "\u2663";
    const std::string HEART = "\u2665";
   
    
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
        bool hasCards() {
            if(deck.size() > 0) {
                return true;
            }
            else {
                return false;
            }
        }
        std::vector<Card> getDeck() {
            return deck;
        }
};
class Hand {
    int bookCount;
    std::vector<Card> hand;
    Deck deck;
    public:
        Hand(Deck deck1) {
            int count  = 0;
            deck = deck1.getDeck();
            while(count != 7) {
                Card card = deck.drawCard();
                hand.push_back(card);
                count++;
            }
        }
        void draw() {
            Card card = deck.drawCard();
            if(deck.hasCards()) {
                hand.push_back(card);

            }
        }
        Card getCard(int CI) {
            Card getCard = hand[CI];
            hand.erase(deck.getDeck().begin() + CI);
        }
        std::vector<Card> findCard(Card pickedCard) {
            std::vector<Card> temp;
            int wantedCard = pickedCard.getRank();
            for(int i = 0; i < hand.size(); i++) {
                Card currentCard = hand[i];
                int currentCardRank = currentCard.getRank();
                if(currentCardRank == wantedCard) {
                    temp.push_back(currentCard);
                    hand.erase(hand.begin() + i);
                }
            }
            return temp;
        }
        bool addCard(std::vector<Card> temp) {
            if(temp.empty()) {
                std::cout << "Go Fish";
                draw();
                std::string str(hand.begin(), hand.end());
                std::cout << str;
                return false;
            }
            else {
                for(int i  = 0; i < temp.size(); i++) {
                    Card currentCard = temp[i];
                    hand.push_back(currentCard);
                }
                std::string str(hand.begin(), hand.end());
                std::cout << "New hand = " + str;
                return true;
            }
        }
        int getSize() {
            return hand.size();
        }
        int getBookCount() {
            return bookCount;
        }
        void removeCard(int r) {
            Card firstCard = hand[0];
            for(int i = 0; i < hand.size(); i++) {
                Card currentCard = hand[i];
                int currentCardRank = currentCard.getRank();
                if(currentCardRank= rank) {
                    hand.erase(hand.begin() + i);
                }
            }
        }
        std::string printHand() {
            std::string str = "";
            for(int i = 0; i < hand.size(); i++) {
                str += hand[i].toString() + " ";
            }
            return str;
        }
};

int main() {

}