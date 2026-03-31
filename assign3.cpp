#include <iostream>
using namespace std;

// Q1
class P
{
    int x;
public:
    void set(int a){ x = a; }
    void show(){ cout << x << endl; }
};

void q1()
{
    P o;
    o.set(5);
    o.show();
    P *p;
    p = &o;
    p->set(10);
    p->show();
}

// Q2
class B;

class A
{
    int x;
public:
    A(int a){ x = a; }
    void show(){ cout << x << endl; }
    friend void swapv(A &, B &);
};

class B
{
    int y;
public:
    B(int b){ y = b; }
    void show(){ cout << y << endl; }
    friend void swapv(A &, B &);
};

void swapv(A &p, B &q)
{
    int t = p.x;
    p.x = q.y;
    q.y = t;
}

void q2()
{
    A a1(3);
    B b1(6);
    a1.show();
    b1.show();
    swapv(a1, b1);
    a1.show();
    b1.show();
}

// Q3
class C;

class D
{
    int x;
public:
    D(int a){ x = a; }
    friend int addv(D, C);
};

class C
{
    int y;
public:
    C(int b){ y = b; }
    friend int addv(D, C);
};

int addv(D p, C q)
{
    return p.x + q.y;
}

void q3()
{
    D d1(4);
    C c1(5);
    cout << addv(d1, c1) << endl;
}

// Q4
class E
{
    int x;
public:
    E(int a){ x = a; }
    friend class F;
};

class F
{
public:
    void show(E e)
    {
        cout << e.x << endl;
    }
};

void q4()
{
    E e1(7);
    F f1;
    f1.show(e1);
}

// Q5
class R
{
    int l,b;
public:
    void set(int x,int y){ l=x; b=y; }
    void area(){ cout << l*b << endl; }
};

void q5()
{
    R r[3];
    r[0].set(2,3);
    r[1].set(4,5);
    r[2].set(6,7);
    for(int i=0;i<3;i++) r[i].area();
}

// Q6
inline int cube(int x)
{
    return x*x*x;
}

void q6()
{
    cout << cube(3) << endl;
}

// Q7a
class G
{
public:
    int x;
};

G fun1(G a)
{
    a.x = a.x + 5;
    return a;
}

void q7a()
{
    G g1;
    g1.x = 10;
    G g2 = fun1(g1);
    cout << g2.x << endl;
}

// Q7b
class H
{
public:
    int x;
};

void fun2(H &h)
{
    h.x = h.x + 5;
}

void q7b()
{
    H h1;
    h1.x = 20;
    fun2(h1);
    cout << h1.x << endl;
}

int main()
{
    q1();
    q2();
    q3();
    q4();
    q5();
    q6();
    q7a();
    q7b();
    return 0;
}