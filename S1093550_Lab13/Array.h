#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <stdexcept>
#include <new>
using namespace std;

class Array {
    friend ostream &operator<<(ostream & , const Array & );
    friend istream &operator >>(istream &, Array &);
public:
    Array (int = 10 );
    Array (const Array & );
    ~Array();
    int getSize() const ;
    const Array &operator = (const Array & );
    const Array &operator>> (int k);
    Array operator + (const Array & );
    const Array &operator- ();// declare each operator
    bool operator ==(const Array & ) const;
    bool operator !=(const Array & right) const
    {
    return !(*this == right );

    }
    int & operator[] (int);
    int operator [](int)const ;
private:
    int size;
    int * ptr;


};
#endif // ARRAY_H



