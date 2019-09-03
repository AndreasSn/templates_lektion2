#include <iostream>
using namespace std;

template<typename T, size_t arraySize>
class myArray
{
private:
    T array_ [arraySize];
public:
    myArray(){};
    ~myArray(){};

    void fill(const T& t){
        for (size_t i = 0; i < size(); i++)
        {
            array_[i] = t;
        }
    };

    T* begin(){
        return &array_[0];
    };

    T* end(){
         return &array_[arraySize];
    };

     T &operator[](size_t index)
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

template <typename T>
T *myFind(T *first, T *last, T &v)
{
    for (auto i = first; i < last; i++)
    {
        cout << "checking if i: " << *i << "is equal to v: " << v << endl;
        if (*i == v)
        {
            return i;
        }
    }
    return last;
}
