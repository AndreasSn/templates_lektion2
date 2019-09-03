#include <iostream>
#include <string>
using namespace std;

template<typename T, size_t arraySize>
class myArray
{
private:
    T array_ [arraySize];
public:
    myArray(){};
    ~myArray(){};

    template <typename T2, size_t sizee>
    myArray( myArray<T2, sizee>& ar1)
    {
         for (auto i = 0; i < arraySize; i++)
         {
            array_[i] = ar1[i];
         }  
    }

    template<typename T2, size_t sizee>
    myArray &operator=( myArray<T2, sizee>& other){
      size_t smallest = other.getSize() > getSize() ? getSize() : other.getSize();
      cout << "the smallest" << smallest << endl;
      for (auto i = 0; i < smallest; i++)
      {
        array_[i] = other[i];
      }
      return *this;
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

    T &operator[](size_t index){
        return array_[index];
    };

    size_t getSize() {return arraySize;};
};

template<typename T, size_t arraySize>
class myArray<T*, arraySize>
{
private:
    T* array_ [arraySize];
public:
    myArray(){
        cout << "PARTIAL" << endl;
    };
    ~myArray(){
      for (auto i = 0; i < arraySize; i++)
      {
        delete array_[i]; 
      }
    };

    template <typename T2, size_t sizee>
    myArray( myArray<T2, sizee>& ar1)
    {
         for (auto i = 0; i < arraySize; i++)
         {
             cout << "deleting : " << array_[i] << endl;
            array_[i] = ar1[i];
         }  
    }

    template<typename T2, size_t sizee>
    myArray &operator=( myArray<T2, sizee>& other){
      size_t smallest = other.getSize() > getSize() ? getSize() : other.getSize();
      cout << "the smallest" << smallest << endl;
      for (auto i = 0; i < smallest; i++)
      {
        array_[i] = other[i];
      }
      return *this;
    };

    void fill( T* t){
        for (size_t i = 0; i < getSize(); i++)
        {
            array_[i] = t;
        }
    };

    void print(){
        for (int i = 0; i < getSize(); i++)
        {
            cout << "element: " << i  << " is : "<< *array_[i] << endl;
        } 
    }

    T* begin(){
        return array_[0];
    };

    T* end(){
         return array_[arraySize];
    };

    T& operator[](size_t index){
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
 