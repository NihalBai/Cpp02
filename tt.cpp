#include <iostream>

class Number {
private:
    int* data;
public:
    Number(int val) {
        data = new int(val);
        std::cout << "Constructor allocates " << *data << "\n";
    }

    ~Number() {
        std::cout << "Destructor deletes " << *data << "\n";
        delete data;
    }
};

int main() {
    Number a(42);
    Number b = a; // <-- compiler-generated copy constructor (shallow copy)
}
