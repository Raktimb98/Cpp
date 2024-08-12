#include <iostream>
#include <ctime>
int main() {
    int num;
    int guess;
    int tries;
    srand(time(NULL));
    num = (rand() % 100) +1;
    do{
        std::cout << "Enter a guess (between 1 to 100):";
        std::cin >> guess;
        tries++;
        if(guess > num){
            std::cout << "Too high!";
        }
        else if (guess<num)
        {
            std::cout << "Too low!";
        }
        else{
            std::cout << "Correct , Number of tries:" << tries << '\n';
        }
        
    }
    while(guess!=num);
    return 0;
}