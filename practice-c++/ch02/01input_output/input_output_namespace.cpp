#include <iostream>
using namespace std;    //namespace: 소속 지정 -> 내부식별자에 범위를 부여해 여러 라이브러리를 포함할 때 이름 충돌을 방지

int main(){
    int i, j;
    cout << "enter num1: ";    // 출력
    cin >> i;  // 사용자에게 정수를 입력받아 i에 저장

    cout << "enter num2: ";
    cin >> j;

    //합을 출력
    cout << "num1 + num2 = " << i+j << "입니다" << endl;

    return 0;
}