template <typename T>
class Array {
public:
    Array(int size, T initValue) {
        this->size = size;
        p = new T[size];
        for (int i = 0; i < size; i++) {
            p[i] = initValue;
        }
    }

    ~Array() {
        delete[] p;
    }

    void print();

private:
    int size;
    T * p;
};