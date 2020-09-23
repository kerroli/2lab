#include <iostream>
#include <cmath>

int task1();
int task2();
int task3();
int task4();

int main() {
    task1();
    task2();
    task3();
    task4();
    return 0;
}

int task1(){
    std::cout << "First task:" << std::endl;
    int x=0;
    for(int y = 0 ; y <= 255 ; y++) {
        std::cout << static_cast<char>(y) << ' ';
        x++;
        if (x == 30) {
            std::cout << "\n";
            x=0;
        }
    }
    std::cout << std::endl;
    return 0;
}

int task2() {
    std::cout << "Second task:" << std::endl;
    char x;
    std::cout << "Enter your symbol:" << std::endl;
    std::cin >> x;
    static_cast<int>(x);
    if (48 <= x && x <= 57){
        std::cout << "Entered symbol is a digit" << std::endl;
        return 0;
    }
    if ((65 <= x && x <= 90) || (97 <= x && x <= 122)){
        std::cout << "Entered symbol is a letter" << std::endl;
        return 0;
    }
    else
        std::cout <<"Entered symbol is unknown" << std::endl;
    return 0;
}

int task3(){
    std::cout << "Third task:" << std::endl;
    unsigned int x;
    std::cin >> x;
    switch (x%4){
        case 0:
            std::cout << 0 << std::endl;
            break;
        case 1:
            std::cout << 2*x+1 << std::endl;
            break;
        case 2:
            std::cout << '-' << x << std::endl;
            break;
        case 3:
            std::cout << 3*x << std::endl;
            break;
    }
    return 0;
}

int task4(){
    std::cout << "Fourth task:" << std::endl;
    float x;
    std::cin >> x;
    int power = -2;
    for ( unsigned int acc = 100; acc<=1000000; acc*=10) {
        int n = 1;
        float y = 1 / pow((1 - x), 3);
        float answ = x;
        while ((static_cast<int>(answ*acc)) != (static_cast<int>(y*acc))){
            answ += (((n-1)*n)/2)*pow(x,(n-2));
            std::cout << answ << std::endl;
            n++;
        }
        std::cout << answ << " correctness 10^" << power << " iterations " << n << std::endl;
        power--;
    }
    return 0;
}
