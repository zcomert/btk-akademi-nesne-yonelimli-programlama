#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

// Abstract Player class
class Player {
public:
    Player(const std::string& name) : name(name), score(0) {}

    virtual std::string makeMove() = 0;

    void updateScore(int points) {
        score += points;
    }

    int getScore() const {
        return score;
    }

    std::string getName() const {
        return name;
    }

private:
    std::string name;
    int score;
};

// HumanPlayer class
class HumanPlayer : public Player {
public:
    HumanPlayer(const std::string& name) : Player(name) {}

    std::string makeMove() override {
        std::cout << "Enter your move (rock, paper, or scissors): ";
        std::string move;
        std::cin >> move;
        return move;
    }
};

// RandomComputerPlayer class
class RandomComputerPlayer : public Player {
public:
    RandomComputerPlayer() : Player("Computer") {}

    std::string makeMove() override {
        std::vector<std::string> moves = {"rock", "paper", "scissors"};
        int randomIndex = rand() % moves.size();
        return moves[randomIndex];
    }
};

// Game class
class Game {
public:
    Game() : humanPlayer("Player"), computerPlayer() {}

    void start() {
        std::cout << "Welcome to Rock-Paper-Scissors Game!" << std::endl;
        while (true) {
            std::string humanMove = humanPlayer.makeMove();
            std::string computerMove = computerPlayer.makeMove();

            std::cout << humanPlayer.getName() << " chose " << humanMove << std::endl;
            std::cout << computerPlayer.getName() << " chose " << computerMove << std::endl;

            int result = determineWinner(humanMove, computerMove);

            if (result == 1) {
                humanPlayer.updateScore(1);
                std::cout << humanPlayer.getName() << " wins!" << std::endl;
            } else if (result == -1) {
                computerPlayer.updateScore(1);
                std::cout << computerPlayer.getName() << " wins!" << std::endl;
            } else {
                std::cout << "It's a draw!" << std::endl;
            }

            std::cout << "Scores - " << humanPlayer.getName() << ": " << humanPlayer.getScore()
                      << ", " << computerPlayer.getName() << ": " << computerPlayer.getScore() << std::endl;

            if (!playAgain()) {
                break;
            }
        }

        std::cout << "Game Over! Final Scores - " << humanPlayer.getName() << ": " << humanPlayer.getScore()
                  << ", " << computerPlayer.getName() << ": " << computerPlayer.getScore() << std::endl;
    }

private:
    HumanPlayer humanPlayer;
    RandomComputerPlayer computerPlayer;

    int determineWinner(const std::string& playerMove, const std::string& computerMove) {
        if (playerMove == computerMove) {
            return 0; // Draw
        } else if ((playerMove == "rock" && computerMove == "scissors") ||
                   (playerMove == "paper" && computerMove == "rock") ||
                   (playerMove == "scissors" && computerMove == "paper")) {
            return 1; // Player wins
        } else {
            return -1; // Computer wins
        }
    }

    bool playAgain() {
        char choice;
        std::cout << "Do you want to play again? (y/n): ";
        std::cin >> choice;
        return (choice == 'y' || choice == 'Y');
    }
};

int main() {
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    Game game;
    game.start();

    return 0;
}
