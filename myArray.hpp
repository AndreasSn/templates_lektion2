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

    //copy constructor

    template <typename T2, size_t sidid>
    myArray( myArray<T2, sidid>& ar1)
    {
         for (auto i = 0; i < arraySize; i++)
         {
            array_[i] = ar1[i];
         }  
    }

    myArray &operator=(myArray const &other)
    {
        // 1: allocate new memory and copy the elements

        if (this != &other)
        {

            cout << endl <<  "size:" << other.getSize() << endl;
            array_ = new T[other.getSize()];
        }
        // 2: deallocate old memory

        // 3: assign the new memory to the object
    };

    void fill(const T& t){
        for (size_t i = 0; i < getSize(); i++)
        {
            array_[i] = t;
        }
    };

    void print(){
        for (int i = 0; i < getSize(); i++)
        {
            cout << "element: " << i  << " is : "<< array_[i] << endl;
        } 
    }

    T* begin(){
        return &array_[0];
    };

    T* end(){
         return &array_[arraySize];
    };

    T &operator[](size_t index)
    {
        if (index >= getSize())
        {
            cout << "Array index out of bound, exiting";
            throw std::out_of_range ("out of range");
        }
        return array_[index];
    };

    size_t getSize() {return arraySize;};
};

template <typename T, typename T1>
T *myFind(T *first, T *last, T1 &v)
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
