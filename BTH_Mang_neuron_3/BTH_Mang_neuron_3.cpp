// BTH_Mang_neuron_3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

class numpy
{
protected:
    numpy() {};
    
    ~numpy() {};
};
class Bai_toan
{
public:
    Bai_toan() {};
    virtual double calc() {};
    ~Bai_toan() {};
};

class Sphere:public Bai_toan
{
public:
    Sphere() {};
    double calc(int d,double x[])
    {
        double sum=0;
        for (int i = 0; i < d; i++)
        {
            sum = sum + x[i] * x[i];
        };
        return sum;
    };
    ~Sphere() {};
};

class Rastrigin :public Bai_toan
{
public:
    Rastrigin() {};
    double calc(int d, double x[])
    {
        double sum = 10*d;
        
        return sum;
    };
    ~Rastrigin() {};
};

class Rosenbrock :public Bai_toan
{
public:
    Rosenbrock() {};
    double calc(int d, double x[])
    {
        double sum = 10 * d;

        return sum;
    };
    ~Rosenbrock() {};
};

class Griewank :public Bai_toan
{
public:
    Griewank() {};
    double calc(int d, double x[])
    {
        double sum = 10 * d;

        return sum;
    };
    ~Griewank() {};
};

class Ackley :public Bai_toan
{
public:
    Ackley() {};
    double calc(int d, double x[])
    {
        double sum = 10 * d;

        return sum;
    };
    ~Ackley() {};
};


class DE
{
protected:
    int Fobj, bounds, F_scale, cross_prob, pop_size, max_iters;
public:
    DE() {};

    void set(int Fobj, int bounds, int F_scale, int cross_prob, int pop_size, int max_iters)
    {
        this->Fobj = Fobj;
        this->bounds = bounds;
        this->F_scale = F_scale;
        this->cross_prob = cross_prob;
        this->pop_size = pop_size;
        this->max_iters = max_iters;
    };

    int run_DE()
    {
        dimesions=
    };

    ~DE() {};
};

int main()
{
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
