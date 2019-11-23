#include <iostream>
#include "header.h"

using namespace std;
int main() {
    while(true) {
        int num = oop::menu();
        if(num==1) oop::createAccount();
        else if(num==5) break;
    }
    return 0;
}