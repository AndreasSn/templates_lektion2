#include <iostream>
using namespace std;

template<typename T, size_t arraySize>
class myArray
{
private:
    T array_ [arraySize];
public:
    myArray(){
        array_[arraySize] = 100;
        cout << "plads 3 "<< array_[arraySize] << endl;

    };
    ~myArray(){};

    void fill(const T& t){
        for (size_t i = 0; i < size(); i++)
        {
            cout << "iteration nummer:  "<< i << endl;

            array_[i] = t;
            cout << array_[i] << endl;

        }
        cout << "plads 0 "<< array_[0] << endl;
        cout << "plads 1 "<< array_[1] << endl;
        cout << "plads 2 "<< array_[2] << endl;
        cout << "plads 3 "<< array_[3] << endl;
        cout << "plads 4 "<< array_[4] << endl;
        
    };

    const T* begin(){
        return &array_[0];
    };

    const T* end(){
         return &array_[arraySize];
    };

    const T &operator[](size_t index)
    {
        if (index >= size())
        {
            cout << "Array index out of bound, exiting";
            throw std::out_of_range ("out of range");
        }
        return array_[index];
    };
    const size_t size(){return arraySize;};
};

