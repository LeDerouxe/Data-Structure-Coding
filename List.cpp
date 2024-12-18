#include <iostream>
#include <list>
using namespace std;

int main() {
//LIST
//add and remove elements from both the beginning and at the end
//does not support random access

list<string> Animals = {"Dog", "Tiger", "Lion", "Cow"};
//constant data-type

cout << Animals.front()<<"\n";
cout << Animals.back()<<"\n";

Animals.push_front("Sheep");
Animals.push_back("Cheetah");

for (string Animal : Animals) cout << Animal << "\n";

Animals.pop_front();
Animals.pop_back();

for (string Animal : Animals) cout << Animal << "\n";

cout << Animals.size()<<"\n";
cout << Animals.empty()<<"\n";
}


