# 🧮 Template Calculator (C++)

A simple **Calculator Project** written in **C++** that demonstrates the power of **Templates**.  
It performs basic arithmetic operations (`+`, `-`, `*`, `/`) on **different data types** such as `int`, `float`, and `double`.

---

## 🌟 Features

✅ Uses **Class Templates** to handle multiple data types.  
✅ Performs basic operations: Addition, Subtraction, Multiplication, Division.  
✅ Includes **exception handling** for division by zero.  
✅ Clean and reusable design.  
✅ Easy to extend and modify.  

---

## 🖼️ Preview

### Example Output:
4 + 6 = 10
4 - 6 = -2
4 * 6 = 24
4 / 6 = 0

---

## 🚀 How It Works

The project uses a **template class** `Calculator<T>` which allows arithmetic operations on any data type.

```cpp
template <typename Type>
class Calculator {
private:
    Type firstValue;
    Type secondValue;
public:
    Calculator(const Type& firstValue, const Type& secondValue) {
        this->firstValue = firstValue;
        this->secondValue = secondValue;
    }
    Type add() { return firstValue + secondValue; }
    Type subtract() { return firstValue - secondValue; }
    Type multiply() { return firstValue * secondValue; }
    Type divide() {
        if (secondValue == 0)
            throw invalid_argument("Cannot divide by zero");
        return firstValue / secondValue;
    }
};

