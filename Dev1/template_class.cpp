#include <stdio.h>
#include <cstdlib>


template<class T>
class Arithmetic {
private:
	T a;
	T b;
public:
	Arithmetic(T a, T b);
	T add();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b)
{
	this->a = a;
	this->b = b;
}

template<class T>
Arithmetic<T>::add()
{
	T c;
	c = a + b;
	return c;
}

int main()
{
	Arithmetic <int> ar(10, 5);
	printf("adding with any generic type: %d", ar.add());
	return 0;
}
