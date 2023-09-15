# Incubyte_chandrayaan-3-tdd-assessment_KrantiKharat
C++ code for a spacecraft class with 3D navigation and command execution demonstrated in the main function.
markdown
Copy code
# Galactic SpaceCraft Control

This C++ program simulates the control of a Galactic SpaceCraft in 3D space using a set of predefined commands. It demonstrates the spacecraft's navigation capabilities and provides the final position and direction after executing a sequence of commands.

## Table of Contents
- [Usage](#usage)
- [Commands](#commands)
- [Example](#example)
- [Contributing](#contributing)
- [License](#license)

## Usage

1. Compile the program using a C++ compiler:
2. Run the compiled executable:

## Commands

The spacecraft understands the following commands:
- `f`: Move forward
- `b`: Move backward
- `l`: Turn left
- `r`: Turn right
- `u`: Turn up
- `d`: Turn down

## Example

```cpp
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
   
