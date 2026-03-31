#include <iostream>
using namespace std;

// Q1
class Base
{
public:
    void show(){ cout << "base" << endl; }
};

class Derived : public Base
{
public:
    void show2(){ cout << "derived" << endl; }
};

void q1()
{
    Base b;
    Derived d;
    b.show();
    d.show();
    d.show2();
}

// Q2
class A
{
protected:
    int x;
};

class B : public A
{
public:
    void set(){ x = 5; }
    void show(){ cout << x << endl; }
};

void q2()
{
    B b;
    b.set();
    b.show();
}

// Q3
class C1
{
public:
    int x;
};

class C2 : protected C1
{
public:
    void set(){ x = 10; }
    void show(){ cout << x << endl; }
};

class C3 : private C1
{
public:
    void set(){ x = 20; }
    void show(){ cout << x << endl; }
};

void q3()
{
    C2 a;
    C3 b;
    a.set();
    b.set();
    a.show();
    b.show();
}

// Q4 Single
class S1
{
public:
    void f(){ cout << "single" << endl; }
};

class S2 : public S1 {};

void q4_single()
{
    S2 s;
    s.f();
}

// Q4 Multiple
class M1{ public: void f1(){ cout<<"m1"<<endl; } };
class M2{ public: void f2(){ cout<<"m2"<<endl; } };
class M3 : public M1, public M2 {};

void q4_multiple()
{
    M3 m;
    m.f1();
    m.f2();
}

// Q4 Hierarchical
class H1{ public: void f(){ cout<<"h1"<<endl; } };
class H2 : public H1 {};
class H3 : public H1 {};

void q4_hierarchical()
{
    H2 a;
    H3 b;
    a.f();
    b.f();
}

// Q4 Multilevel
class L1{ public: void f(){ cout<<"l1"<<endl; } };
class L2 : public L1 {};
class L3 : public L2 {};

void q4_multilevel()
{
    L3 l;
    l.f();
}

// Q4 Hybrid
class X{ public: void f(){ cout<<"x"<<endl; } };
class Y : public X {};
class Z : public X {};
class W : public Y, public Z {};

void q4_hybrid()
{
    W w;
    w.Y::f();
}

// Q5
class P
{
public:
    P(){ cout<<"base cons"<<endl; }
    ~P(){ cout<<"base dest"<<endl; }
};

class Q : public P
{
public:
    Q(){ cout<<"derived cons"<<endl; }
    ~Q(){ cout<<"derived dest"<<endl; }
};

void q5()
{
    Q q;
}

// Q6
class Book
{
public:
    string title, author;
    int price;
};

class Textbook : public Book
{
public:
    string subject;
};

void q6()
{
    Textbook t;
    t.title = "abc";
    t.author = "xyz";
    t.price = 100;
    t.subject = "math";
    cout << t.title << " " << t.subject << endl;
}

// Q7
class Speedometer
{
public:
    int speed;
};

class FuelGauge
{
public:
    int fuel;
};

class Thermometer
{
public:
    int temp;
};

class CarDashboard : public Speedometer, public FuelGauge, public Thermometer
{
public:
    void show()
    {
        cout << speed << " " << fuel << " " << temp << endl;
    }
};

void q7()
{
    CarDashboard c;
    c.speed = 80;
    c.fuel = 50;
    c.temp = 30;
    c.show();
}

// Q8
class LibraryUser
{
public:
    string name;
    int id;
};

class Student : public LibraryUser
{
public:
    int grade;
};

class Teacher : public LibraryUser
{
public:
    string dept;
};

void q8()
{
    Student s;
    Teacher t;
    s.name="a"; s.grade=10;
    t.name="b"; t.dept="cs";
    cout<<s.name<<" "<<s.grade<<endl;
    cout<<t.name<<" "<<t.dept<<endl;
}

// Q9
class Vehicle
{
public:
    string make;
};

class Truck : public Vehicle
{
public:
    int load;
};

class RefrigeratedTruck : public Truck
{
public:
    int temp;
};

void q9()
{
    RefrigeratedTruck r;
    r.make="tata";
    r.load=100;
    r.temp=5;
    cout<<r.make<<" "<<r.load<<" "<<r.temp<<endl;
}

// Q10
class Person
{
public:
    string name;
};

class Staff : public Person
{
public:
    int emp_id;
};

class Student2 : public Person
{
public:
    int stu_id;
};

class TeachingAssistant : public Staff, public Student2
{
};

void q10()
{
    TeachingAssistant t;
    t.Staff::name="x";
    t.emp_id=1;
    t.stu_id=2;
    cout<<t.emp_id<<" "<<t.stu_id<<endl;
}

int main()
{
    q1();
    q2();
    q3();
    q4_single();
    q4_multiple();
    q4_hierarchical();
    q4_multilevel();
    q4_hybrid();
    q5();
    q6();
    q7();
    q8();
    q9();
    q10();
    return 0;
}