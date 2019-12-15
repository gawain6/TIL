#include <iostream>
#include "header.h"

using namespace std;
int oop::menu(void) {
    int num;
    cout << "-----Menu-----" << endl;
    cout << "1. 계좌개설" << endl;
    cout << "2. 입 금" << endl;
    cout << "3. 출 금" << endl;
    cout << "4. 계좌정보 전체 출력" << endl;
    cout << "5. 프로그램 종료" << endl;
    cout << "선택: ";
    cin >> num;
    return num;
}

void oop::createAccount(void) {
    int id, money;
    char name[20];
    cout << "[계좌개설]" << endl;
    cout << "계좌ID: ";
    cin >> id;
    cout << "이 름: ";
    cin >> name;
    cout << "입금액: ";
    cin >> money;
}

void oop::inputMoney(void) {
    int id, money;
    cout << "[입    금]" << endl;
    cout << "계좌ID: ";
    cin >> id;
    cout << "입금액: " << endl;
    cin >> money;
    cout << "입금완료" << endl;
}

void oop::depositMoney(void) {
    
}