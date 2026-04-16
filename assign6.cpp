#include <bits/stdc++.h>
using namespace std;

//QUESTION 1

class Book1 {
public:
    string title;
    string author;
    string ISBN;
};

class Library1 {
private:
    Book1 books[100];
    int count;

public:
    Library1() {
        count = 0;
    }

    bool addNewBook(const string &title, const string &author, const string &ISBN) {
        if (count >= 100) return false;
        books[count].title = title;
        books[count].author = author;
        books[count].ISBN = ISBN;
        count++;
        return true;
    }

    bool removeBooks(const string &ISBN);

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " | "
                 << books[i].author << " | "
                 << books[i].ISBN << endl;
        }
    }
};

bool Library1::removeBooks(const string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

// QUESTION 2 

class Book2 {
public:
    string title;
    string author;
    string ISBN;

    Book2() {
        this->title = "";
        this->author = "";
        this->ISBN = "";
    }

    Book2(const string &title, const string &author, const string &ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book2(const Book2 &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }
};

class Library2 {
private:
    Book2 books[100];
    int count;

public:
    Library2() {
        count = 0;
    }

    bool addNewBook(const string &title, const string &author, const string &ISBN) {
        if (count >= 100) return false;
        books[count++] = Book2(title, author, ISBN);
        return true;
    }

    bool removeBooks(const string &ISBN);

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            cout << books[i].title << " | "
                 << books[i].author << " | "
                 << books[i].ISBN << endl;
        }
    }
};

bool Library2::removeBooks(const string &ISBN) {
    for (int i = 0; i < count; i++) {
        if (books[i].ISBN == ISBN) {
            for (int j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

// QUESTION 3 

class Account {
private:
    const long accountNumber;
    long transactionID;
    string transactionType;
    double balance;
    static long counter;

public:
    Account(const long accNo, const double bal)
        : accountNumber(accNo), balance(bal) {
        transactionID = 0;
        transactionType = "None";
    }

    long depositAmount(const long &to, const long &from, const double &amount) {
        if (accountNumber == to) {
            balance += amount;
            transactionType = "Credit";
            transactionID = ++counter;
        }
        return transactionID;
    }

    long creditAmount(const long &to, const long &from, const double &amount) {
        if (accountNumber == from) {
            balance -= amount;
            transactionType = "Debit";
            transactionID = ++counter;
        }
        return transactionID;
    }

    void displayDetails() const {
        cout << accountNumber << " | " << balance << " | " << transactionType << endl;
    }
};

long Account::counter = 0;

//QUESTION 4 

class A {
public:
    int x;
    A(int x) { this->x = x; }
};

class B {
public:
    int y;
    B(int y) { this->y = y; }
};

class Result {
public:
    int sum;
    friend Result add(A, B);
};

Result add(A a, B b) {
    Result r;
    r.sum = a.x + b.y;
    return r;
}

//QUESTION 5 

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    Complex(const Complex &c) {
        real = c.real;
        imag = c.imag;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }

    friend Complex sum(Complex, Complex);
};

Complex sum(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}


int main() {
    Library1 l1;
    l1.addNewBook("Book1", "Author1", "111");
    l1.addNewBook("Book2", "Author2", "222");
    l1.addNewBook("Book3", "Author3", "333");
    l1.addNewBook("Book4", "Author4", "444");
    l1.addNewBook("Book5", "Author5", "555");
    l1.displayDetails();
    l1.removeBooks("333");
    cout << "After Removal:\n";
    l1.displayDetails();

    // Q2
    Library2 l2;
    l2.addNewBook("B1", "A1", "101");
    l2.addNewBook("B2", "A2", "102");
    l2.displayDetails();

    Book2 arr1[2] = {
        Book2("A", "AuthorA", "201"),
        Book2("B", "AuthorB", "202")
    };

    Book2 *arr2 = new Book2[2] {
        Book2("C", "AuthorC", "301"),
        Book2("D", "AuthorD", "302")
    };

    delete[] arr2;

    // Q3
    Account a1(101,1000), a2(102,2000), a3(103,1500), a4(104,3000), a5(105,500);
    a1.depositAmount(101,102,500);
    a2.creditAmount(101,102,300);
    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();

    
    A a(10);
    B b(20);
    Result r = add(a,b);
    cout << "Sum = " << r.sum << endl;



    Complex c1(2,3), c2(4,5);
    Complex c3 = sum(c1,c2);
    c3.display();

    return 0;
}
