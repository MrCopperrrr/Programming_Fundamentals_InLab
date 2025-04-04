#include<iostream>
using namespace std;

class Integer {
public:
    Integer(int val) : val(val) {}
    Integer(Integer* other) : val(other->val) {}

    Integer operator+(const Integer& other) const {
        return Integer(val + other.val);
    }

    Integer operator+(int other) const {
        return Integer(val + other);
    }

    void print();

private:
    int val;
};

void Integer::print() {
    cout << this->val << endl;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    Integer a(x);
    Integer b(y);
    Integer* t = new Integer(z);
    Integer c(t);
    
    a.print(); b.print();
    (a + b + c + 4).print();
    
    delete t;
    return 0;
}