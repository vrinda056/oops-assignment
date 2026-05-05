//FUNCTION TEMPLATE
//q1
#include <bits/stdc++.h>

using namespace std;

template <class T >

void swapi(s &a, s &b)
{
    T temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;
    return;
}
int main()
{
    int x = 3;
    int y = 5;
    swapi(x, y);

    char n = 'c';
    char m = 'd';
    swapi(n, m);
}
//q2
#include <bits/stdc++.h>
using namespace std;

template <class T>

void minele(T arr[], int size)
{
    T min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << min << endl;
}

int main()
{

    int arr[] = {3, 4, 78, 9, -7,34,-789};
    int size = sizeof(arr) / sizeof(arr[0]);

    minele(arr, size);

    char arr2[] = {'m', 'k', 'o', 's', 'h', 'a'};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    minele(arr2, size2);
}
//q3
#include <bits/stdc++.h>
using namespace std;

template < class T>
void bubbleSort(T arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                T temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
};

int main()
{
    int arr[8] = {5, 4, 3, 2, 1, 0, -3, -6};
    bubbleSort( arr,8);

    return 0;
}
//q4
#include <bits/stdc++.h>
using namespace std;

template <typename s>

void linSearch(vector<s> arr, s target)
{
    bool flag = false;
    for (int i = 0; i < arr.size(); i++)
    {
        if (target == arr[i])
        {
            flag = true;
        }
    }
    if (flag)
        cout << "Target found";
    else
    {
        cout << "Target not found";
    }
}
int main()
{

    vector<int> arr = {1, 3, 4, 5};
    linSearch(arr, 9);
}
//q5
#include <bits/stdc++.h>
using namespace std;

template <typename T>
void process(T a)
{
    cout << a << endl;
}

template <typename T>
void process(T a, T b)
{
    cout << a << " " << b << endl;
}

template <typename T, typename U>
void process(T a, U b)
{
    cout << a << " " << b << endl;
}

int main()
{
    process(5);
    process(10, 20);
    process(5, 3.14);
    return 0;
}
//CLASS TEMPLATE
//q1
#include <bits/stdc++.h>
using namespace std;

template <class T>
class Stack
{
    T arr[100];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    void push(T x)
    {
        if (top == 99)
        {
            cout << "Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Underflow\n";
            return;
        }
        top--;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();

    s.display();
}
//q2
#include <bits/stdc++.h>
using namespace std;

template <class T>
class Queue
{
    T arr[100];
    int front, rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }

    void enqueue(T x)
    {
        if (rear == 99)
        {
            cout << "Overflow\n";
            return;
        }
        arr[++rear] = x;
    }

    void dequeue()
    {
        if (front > rear)
        {
            cout << "Underflow\n";
            return;
        }
        front++;
    }

    void display()
    {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Queue<int> q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    q.dequeue();

    q.display();
}
//q3
#include <bits/stdc++.h>
using namespace std;

template <class T>
class Pair
{
    T a, b;

public:
    void set(T x, T y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    Pair<int> p;
    p.set(10, 20);
    p.display();
}
//q4
#include <bits/stdc++.h>
using namespace std;

template <class T>
class Calc
{
public:

    T add(T a, T b)
    {
        return a + b;
    }

    T sub(T a, T b)
    {
        return a - b;
    }

    T mul(T a, T b)
    {
        return a * b;
    }

    T divi(T a, T b)
    {
        return a / b;
    }
};

int main()
{
    Calc<int> c;

    cout << c.add(10, 5) << endl;
    cout << c.sub(10, 5) << endl;
    cout << c.mul(10, 5) << endl;
    cout << c.divi(10, 5) << endl;
}
//q5
#include <bits/stdc++.h>
using namespace std;

template <class T>
class Array
{
    T arr[100];
    int n;

public:
    void input(int size)
    {
        n = size;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
    }

    void display()
    {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main()
{
    Array<int> a;

    a.input(5);
    a.display();
}