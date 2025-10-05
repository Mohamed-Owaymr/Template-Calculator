#include <iostream>
using namespace std;
/*
    Template : Is feature in c++ let the functions or classes works with different data types.

    Why Use Templates?
    *Avoid repeating the same logic for different types.
    *Write cleaner, reusable code.
    *Support generic programming.

*/


template <typename Type>
class Calculator {
private:
    Type firstValue;
    Type secondValue;
public:
    Calculator(const Type& firstValue , const Type& secondValue) {
        this->firstValue  = firstValue;
        this->secondValue = secondValue;
    }
    Type getFirstValue() {
        return firstValue;
    }
    Type getSecondValue() {
        return secondValue;
    }
    Type add() {
        return firstValue + secondValue;
    }
    Type subtract() {
        return firstValue - secondValue;
    }
    Type multiply() {
        return firstValue * secondValue;
    }
    Type divide() {
        if(secondValue == 0)
            throw invalid_argument("Can NOT Divide On Zero");
        return firstValue / secondValue;
    }
};




int main() {
    Calculator<int> calcualtorForInt(4 , 6);
    cout << calcualtorForInt.getFirstValue() << " + " << calcualtorForInt.getSecondValue() << " = " << calcualtorForInt.add() << endl;
    cout << calcualtorForInt.getFirstValue() << " - " << calcualtorForInt.getSecondValue() << " = " << calcualtorForInt.subtract()<< endl;
    cout << calcualtorForInt.getFirstValue() << " * " << calcualtorForInt.getSecondValue() << " = " << calcualtorForInt.multiply()<< endl;
    cout << calcualtorForInt.getFirstValue() << " / " << calcualtorForInt.getSecondValue() << " = " << calcualtorForInt.divide()<< endl;

    Calculator<double> calcualtorForDouble(4.3 , 6.2);
    cout << calcualtorForDouble.getFirstValue() << " + " << calcualtorForDouble.getSecondValue() << " = " << calcualtorForDouble.add()<< endl;
    cout << calcualtorForDouble.getFirstValue() << " - " << calcualtorForDouble.getSecondValue() << " = " << calcualtorForDouble.subtract()<< endl;
    cout << calcualtorForDouble.getFirstValue() << " * " << calcualtorForDouble.getSecondValue() << " = " << calcualtorForDouble.multiply()<< endl;
    cout << calcualtorForDouble.getFirstValue() << " / " << calcualtorForDouble.getSecondValue() << " = " << calcualtorForDouble.divide()<< endl;

    Calculator<double> calcualtorForCharacter('A' , 'S');
    cout << calcualtorForCharacter.getFirstValue() << " + " << calcualtorForCharacter.getSecondValue() << " = " << calcualtorForCharacter.add()<< endl;
    cout << calcualtorForCharacter.getFirstValue() << " - " << calcualtorForCharacter.getSecondValue() << " = " << calcualtorForCharacter.subtract()<< endl;
    cout << calcualtorForCharacter.getFirstValue() << " * " << calcualtorForCharacter.getSecondValue() << " = " << calcualtorForCharacter.multiply()<< endl;
    cout << calcualtorForCharacter.getFirstValue() << " / " << calcualtorForCharacter.getSecondValue() << " = " << calcualtorForCharacter.divide()<< endl;
    return 0;
}