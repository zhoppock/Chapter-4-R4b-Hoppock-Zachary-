// Hoppock, Zachary
// divideByTenLoop.cpp
// Oct. 10, 2020
// Print all values divisible by ten that are less than a given value
// Version # 1
#include <iostream>

using namespace std;
int main()
{
cout << "Please give a numeric value: ";
int n;
cin >> n;

int i = 1;

cout << "Here are all the values divisble by 10 that are less than " << n << ":" << endl;
while (i*10 < n)
{ 
  cout << i*10 << endl;
  i++;
}

return 0;
}