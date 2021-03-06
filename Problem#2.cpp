

/*
Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

*/
#include <iostream>
#include <string>
using namespace std;

int Fibonacci(int n);

int main()
{
    int i = 0;
    int sum = 0;
        while(Fibonacci(i) <4000000)
        {
            cout << Fibonacci(i);
            cout << endl;
            sum += Fibonacci(i);
            i+= 3;
        }
        cout << "Sum is: " << sum << endl;
	return 0;
}
int Fibonacci(int n)
{
    if(n == 0)
        return 0;
    if (n == 1)
		return 1;
	else
		return Fibonacci(n-1)+Fibonacci(n-2);
}

