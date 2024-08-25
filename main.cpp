#include <vector>

#include "coreSyntax/pointer/PointerFunctionClassExample.h"
#include "coreSyntax/pointer/PrintClass.h"
#include "algoritms/polindrome/PolindromeValidator.h"
int main() {

    PointerFunctionClassExample pf;

    int (PointerFunctionClassExample::*func)(int, int) = &PointerFunctionClassExample::sub;

    PrintClass print;
    print.printResult(100, 70, func, pf);

    PolindromeValidator polindromeValidator;
    bool isPolindrome = polindromeValidator.isPolindrome(121);
    std::cout << "IS POLINDROME :" << isPolindrome << std::endl;

    return 0;
}
