#include <iostream>
#include <vector>

class GalacticSpaceCraft {
public:
    GalacticSpaceCraft(int x, int y, int z, char direction)
        : x(x), y(y), z(z), direction(direction) {}

    void executeCommands(const std::vector<char>& commands) {
        for (char cmd : commands) {
            switch (cmd) {
                case 'f':
                    moveForward();
                    break;
                case 'b':
                    moveBackward();
                    break;
                case 'l':
                    turnLeft();
                    break;
                case 'r':
                    turnRight();
                    break;
                case 'u':
                    turnUp();
                    break;
                case 'd':
                    turnDown();
                    break;
                default:
                    // Ignore invalid commands
                    break;
            }
        }
    }

    void getPositionAndDirection(int& newX, int& newY, int& newZ, char& newDirection) const {
        newX = x;
        newY = y;
        newZ = z;
        newDirection = direction;
    }

private:
    int x, y, z;
    char direction;

    void moveForward() {
        switch (direction) {
            case 'N':
                y++;
                break;
            case 'S':
                y--;
                break;
            case 'E':
                x++;
                break;
            case 'W':
                x--;
                break;
            case 'U':
                z++;
                break;
            case 'D':
                z--;
                break;
        }
    }

    void moveBackward() {
        switch (direction) {
            case 'N':
                y--;
                break;
            case 'S':
                y++;
                break;
            case 'E':
                x--;
                break;
            case 'W':
                x++;
                break;
            case 'U':
                z--;
                break;
            case 'D':
                z++;
                break;
        }
    }

    void turnLeft() {
        switch (direction) {
            case 'N':
                direction = 'W';
                break;
            case 'S':
                direction = 'E';
                break;
            case 'E':
                direction = 'N';
                break;
            case 'W':
                direction = 'S';
                break;
        }
    }

    void turnRight() {
        switch (direction) {
            case 'N':
                direction = 'E';
                break;
            case 'S':
                direction = 'W';
                break;
            case 'E':
                direction = 'S';
                break;
            case 'W':
                direction = 'N';
                break;
        }
    }

    void turnUp() {
        if (direction != 'U') {
            direction = 'U';
        }
    }

    void turnDown() {
        if (direction != 'D') {
            direction = 'D';
        }
    }
};

int main() {
    int startX = 0, startY = 0, startZ = 0;
    char startDirection = 'N';

    std::vector<char> commands = {'f', 'r', 'u', 'b', 'l'};

    GalacticSpaceCraft spacecraft(startX, startY, startZ, startDirection);
    spacecraft.executeCommands(commands);

    int finalX, finalY, finalZ;
    char finalDirection;
    spacecraft.getPositionAndDirection(finalX, finalY, finalZ, finalDirection);

    std::cout << "Final Position: (" << finalX << ", " << finalY << ", " << finalZ << ")\n";
    std::cout << "Final Direction: " << finalDirection << "\n";

    return 0;
}
