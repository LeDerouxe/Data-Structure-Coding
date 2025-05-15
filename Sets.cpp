#include <iostream>
#include <set>
using namespace std;

/*
stores unique elements.
equal or duplicate values are ignored.
sorted automatically (ascending).
value of an existing element cannot be changed.
Cannot be accessed by index numbers(order is based on sorting)
Strings sort alphabetically.
*/

int main() {
set<int> numbers = {1, 7, 3, 2, 5, 9};
for (int num : numbers) cout << num << "\n";
numbers.insert(12);
numbers.insert(13);
numbers.insert(14);
numbers.erase(13);
for (int num : numbers) cout <<num<<"\n";
cout << *numbers.rbegin()<<"\n";
cout << *numbers.begin()<<"\n";
cout << numbers.size()<<"\n";
cout << numbers.empty();
}


