#include <iostream>
#include <fstream>

int main() {

    std::ifstream INPUT;
    INPUT.open("day1_input.txt", std::ios::in);
    if(!INPUT)
        return -1;

    char ch;
    int floor = 0, charPos = 0;
    bool minusOneVisited = false;

    for(INPUT >> ch; !(INPUT.eof()); INPUT >> ch) {
        charPos++;
        if(ch == '(')
            floor++;
        else if(ch == ')')
            floor--;
        if(!minusOneVisited && floor == -1) {
            std::cout << "Santa makes it to floor -1 first at charPos = " << charPos << std::endl;
            minusOneVisited = true;
        }
    }

    INPUT.close();

    std::cout << "Santa arrives at floor "<< floor << std::endl;

    return 0;
}