// string.h is included

class Book {
    char* name;
public:
    Book(const char*);
    ~Book();
    
    void display();
    char* getName();
};

void Book::display() {
    cout << "Book: " << this->name << endl;
}

char* Book::getName() {
    return this->name;
}


Book::Book(const char* name) {
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

Book::~Book() {
    delete[] name;
}