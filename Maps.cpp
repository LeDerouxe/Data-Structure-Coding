#include <iostream>
#include <map>
using namespace std;

/*
stores in "key/value" pairs.
Accessible by keys.
each key is unique, not necessarily the values
Automatically sorted in ascending order by their keys
cannot access map elements by index, access a map element by referring to its key inside []
*/

int main() {
map<string, int> peopleAge = { {"Ali", 32}, {"Sina", 45}, {"Sara", 29} };
cout << peopleAge["Ali"] << "\n";
peopleAge["Ali"] = 50;
cout <<peopleAge["Ali"]<<"\n";
peopleAge["Kasra"] = 20;
peopleAge["leyla"] = 15;
peopleAge["leyla"] = 16;
cout <<peopleAge["leyla"]<<"\n";
peopleAge.erase("Sina");
cout << peopleAge.count("Amir")<<"\n";
for (auto personAge : peopleAge) cout << personAge.first << " is: " << personAge.second << "\n";
cout << peopleAge.size()<<"\n";
cout << peopleAge.empty();
}


