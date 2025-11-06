#include <iostream>

class Number {
private:
    int* data;
public:
    Number(int val) {
        data = new int(val);
        std::cout << "Constructor allocates " << *data << "\n";
    }

    Number() :data(NULL) {
    }

    ~Number() {
        std::cout << "Destructor deletes " << *data << "\n";
        delete data;
    }
    // Number(const Number &other)
    // {
    //     data = new int(*other.data);
    // }
    // Number &operator=(const Number &other)
    // {
    //     delete data;
    //     data = new int(*other.data);
    //     return *this;
    // }
};

int main() {
    Number a(42);
    Number b(a);
    // b = a; // <-- compiler-generated copy constructor (shallow copy)
}
