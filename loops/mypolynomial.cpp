#include <bits/stdc++.h>
#include <iostream>

using namespace std;

class Polynomial
{

public:
    int *degCoeff; // Name of your array (Don't change this)
    int capacity;
    Polynomial()
    {
        degCoeff = new int[10];
        for (int i = 0; i < 10; i++)
        {
            degCoeff[i] = 0;
        }
        capacity = 10;
    }
    void setCoefficient(int degree, int coefficient)
    {
        if (degree < capacity)
        {
            degCoeff[degree] = coefficient;
        }
        else
        {
            capacity = degree;
            for (int i = capacity; i < degree; i++)
            {
                degCoeff[i] = 0;
            }
            degCoeff[degree] = coefficient;
        }
    }
    Polynomial operator+(Polynomial const &b)
    {
        Polynomial p;
        int size = capacity;
        if (b.capacity > capacity)
        {
            size = b.capacity;
        }
        for (int i = 0; i < size; i++)
        {
            int c = degCoeff[i] + b.degCoeff[i];
            p.setCoefficient(i, c);
        }
        return p;
    }
    Polynomial operator-(Polynomial const &b)
    {
        Polynomial p2;
        int size = capacity;
        if (b.capacity > capacity)
        {
            size = b.capacity;
        }
        for (int i = 0; i < size; i++)
        {
            int c = degCoeff[i] - b.degCoeff[i];
            p2.setCoefficient(i, c);
        }
        return p2;
    }

    Polynomial operator*(Polynomial const &b)
    {
        Polynomial p3;
        int size = capacity;
        if (b.capacity > capacity)
        {
            size = b.capacity;
        }

        for (int i = 0; i < size; i++)
        {
            int c = 0;
            for (int j = 0; j < size; j++)
            {
                c = degCoeff[i] * b.degCoeff[j];
                if (c)
                {
                    if (p3.degCoeff[i + j])
                    {
                        p3.degCoeff[i + j] += c;
                    }
                    else
                    {
                        p3.setCoefficient(i + j, c);
                    }
                }
            }
        }

        return p3;
    }
    Polynomial(Polynomial const &b)
    {
        for (int i = 0; i < b.capacity; i++)
        {
            this->setCoefficient(i, b.degCoeff[i]);
        }
    }
    void print()
    {
        for (int i = 0; i < capacity; i++)
        {
            if (degCoeff[i] != 0)
            {
                cout << degCoeff[i];
                if (i != 0)
                {
                    cout << "x" << i << " ";
                }
                else
                {
                    cout << " ";
                }
            }
        }
    }
    // ~Polynomial(){
    //     delete[] degCoeff;
    // }
};

int main()
{
    int count1, count2, choice;
    cin >> count1;

    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];

    for (int i = 0; i < count1; i++)
    {
        cin >> degree1[i];
    }

    for (int i = 0; i < count1; i++)
    {
        cin >> coeff1[i];
    }

    Polynomial first;
    for (int i = 0; i < count1; i++)
    {
        first.setCoefficient(degree1[i], coeff1[i]);
    }

    cin >> count2;

    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];

    for (int i = 0; i < count2; i++)
    {
        cin >> degree2[i];
    }

    for (int i = 0; i < count2; i++)
    {
        cin >> coeff2[i];
    }

    Polynomial second;
    for (int i = 0; i < count2; i++)
    {
        second.setCoefficient(degree2[i], coeff2[i]);
    }

    cin >> choice;

    Polynomial result;
    switch (choice)
    {
        // Add
    case 1:
        result = first + second;
        result.print();
        break;
        // Subtract
    case 2:
        result = first - second;
        result.print();
        break;
        // Multiply
    case 3:
        result = first * second;
        result.print();
        break;

    case 4: // Copy constructor
    {
        Polynomial third(first);
        if (third.degCoeff == first.degCoeff)
        {
            cout << "false" << endl;
        }
        else
        {
            cout << "true" << endl;
        }
        break;
    }

    case 5: // Copy assignment operator
    {
        Polynomial fourth(first);
        if (fourth.degCoeff == first.degCoeff)
        {
            cout << "false" << endl;
        }
        else
        {
            cout << "true" << endl;
        }
        break;
    }
    }

    return 0;
}