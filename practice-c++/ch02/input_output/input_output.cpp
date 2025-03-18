#include <iostream>

int main(){
    int i, j;
    std::cout << "enter num1: ";    // 출력
    std::cin >> i;  // 사용자에게 정수를 입력받아 i에 저장

    std::cout << "enter num2: ";
    std::cin >> j;

    //합을 출력
    std::cout << "num1 + num2 = " << i+j << std::endl;

    return 0;
}