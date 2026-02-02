// Q1
#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int rollno;
    string degree;
    string hostel;
    float cgpa;

    int addDetails()
    {
        cin >> name >> rollno >> degree >> hostel >> cgpa;
        return 0;
    }

    int updateDetails()
    {
        cin >> name >> rollno >> degree;
        return 0;
    }

    int updateCGPA()
    {
        cin >> cgpa;
        return 0;
    }

    int updateHostel()
    {
        cin >> hostel;
        return 0;
    }

    int displayDetails()
    {
        cout << name << endl;
        cout << rollno << endl;
        cout << degree << endl;
        cout << hostel << endl;
        cout << cgpa << endl;
        return 0;
    }
};

int main()
{
    Student s[2];

    // add details for 2 students
    for(int i = 0; i < 2; i++)
    {
        s[i].addDetails();
    }
    for(int i = 0; i < 2; i++)
    {
        s[i].displayDetails();
        s[i].updateDetails();
        s[i].updateCGPA();
        s[i].updateHostel();
        s[i].displayDetails();
    }

    return 0;
}



// Q2
#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int rollno;
    string degree;
    string hostel;
    float cgpa;

    void updateDetails()
    {
        cin >> name >> rollno >> degree;
    }

    void updateCGPA()
    {
        cin >> cgpa;
    }

    void updateHostel()
    {
        cin >> hostel;
    }

public:
    void addDetails()
    {
        cin >> name >> rollno >> degree >> hostel >> cgpa;
    }

    void modifyDetails()
    {
        updateDetails();
        updateCGPA();
        updateHostel();
    }

    void displayDetails()
    {
        cout << name << endl;
        cout << rollno << endl;
        cout << degree << endl;
        cout << hostel << endl;
        cout << cgpa << endl;
    }
};

int main()
{
    Student s[2];

    for(int i = 0; i < 2; i++)
    {
        s[i].addDetails();
    }

    for(int i = 0; i < 2; i++)
    {
        s[i].displayDetails();
        s[i].modifyDetails();
        s[i].displayDetails();
    }

    return 0;
}

//Q3
#include <iostream>
using namespace std;
class Demo {
  private: 
  void showprivate(){
    cout<< "private function called"<<endl;
  } 
  public: 
  void showpublic(){
    showprivate();
  } 
};
int main(){
    Demo d;
    d.showpublic();
    return 0;
}


// Q4
#include<bits/stdc++.h>
using namespace std;
class rectangle
{
    float width;
    float height;
    void read();
    public:
    void getdata();
    void calculatearea();
};
int main()
{
    rectangle r;
    r.getdata();
    r.calculatearea();
    return 0;
}
void rectangle::getdata()
{
    read();
}
void rectangle::read()
{
    cin>>width;
    cin>>height;
}
void rectangle::calculatearea()
{
    int area=width*height;
    cout<<area;

}


// Q5
#include <bits/stdc++.h>
using namespace std;

class Complex
{
public:
    float real;
    float imaginary;

    void setComplex();
    void displayComplex();
    Complex addComplex(Complex);
};

int main()
{
    Complex c1, c2, c3;

    cout << "Enter first complex number:\n";
    c1.setComplex();

    cout << "Enter second complex number:\n";
    c2.setComplex();

    cout << "First complex number: ";
    c1.displayComplex();

    cout << "\nSecond complex number: ";
    c2.displayComplex();
    
    c3 = c1.addComplex(c2);

    cout << "\nSum of complex numbers: ";
    c3.displayComplex();

    return 0;
}

void Complex::setComplex()
{
    cin >> real >> imaginary;
}

void Complex::displayComplex()
{
    cout << real << " + " << imaginary << "i";
}

Complex Complex::addComplex(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
}




// Q6
int x = 50;

class Test
{
    static int count;

public:
    void show();
};

int Test::count = 10;

void Test::show()
{
    int x = 20;
    cout << ::x << endl;
    cout << Test::count << endl;
    std::cout << "Hello" << endl;
}


// Q7
#include <iostream>
using namespace std;
namespace First
{
    int value = 10;

    void display()
    {
        cout << "Value in First namespace: " << value << endl;
    }
}

namespace Second
{
    int value = 20;

    void display()
    {
        cout << "Value in Second namespace: " << value << endl;
    }
}

int main()
{
    First::display();
    Second::display();

    return 0;
}
