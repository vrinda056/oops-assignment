#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = 0)
    {
        if(b == 0) breadth = l;
        else breadth = b;
        length = l;
    }

    int area()
    {
        return length * breadth;
    }

    ~Rectangle()
    {
        cout << "Rectangle destroyed" << endl;
    }
};

class Student
{
public:
    int roll;

    void set(int r)
    {
        roll = r;
    }

    void display()
    {
        cout << roll << endl;
    }
};

int main()
{
    Rectangle r[3] = {Rectangle(), Rectangle(5), Rectangle(4,6)};

    for(int i=0;i<3;i++)
        cout << r[i].area() << endl;

    int *p = new int;
    *p = 10;
    cout << *p << endl;
    delete p;

    float *f = new float;
    *f = 5.5;
    cout << *f << endl;
    delete f;

    int n = 3;

    int *arr = new int[n];
    for(int i=0;i<n;i++) arr[i]=i+1;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    delete[] arr;

    float *arrf = new float[n];
    for(int i=0;i<n;i++) arrf[i]=i+0.5;
    for(int i=0;i<n;i++) cout<<arrf[i]<<" ";
    cout<<endl;
    delete[] arrf;

    Student *s = new Student;
    s->set(101);
    s->display();
    delete s;

    Student *sarr = new Student[3];
    for(int i=0;i<3;i++) sarr[i].set(i+1);
    for(int i=0;i<3;i++) sarr[i].display();
    delete[] sarr;

    return 0;
}
