#include <iostream>

int main() {

double grades[2];    
std::cout << "Insert your first exam grade" << "\n";
std::cin >> grades[0];
std::cout << "Insert your second exam grade" << "\n";
std::cin >> grades[1];

double average = (grades[0] + grades[1]) / 2;
std::cout << "Your final grade is: " << average << "\n";
if (average >= 50){
    std::cout << "you pass" << "\n";
}else {
    std::cout << "try again" << "\n";
};

return 0;
};
