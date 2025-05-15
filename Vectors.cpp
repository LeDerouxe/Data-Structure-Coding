#include <iostream>
#include <vector>
using namespace std;

//ReSizeable Array
//same data-type
//A vector, can grow or shrink in size.
//As arrays they are element reffering

int main() {
vector<int> Scores={17, 16 ,19};
cout <<Scores.front()<<"\n";
cout <<Scores.back()<<"\n";
//Scores.at(n) can be used over [], better in error handling (safer)
cout <<Scores.at(1)<<"\n";

for (int Score : Scores) cout << Score << "\n";
Scores.push_back(20);
for (int Score : Scores) cout << Score << "\n";
Scores.pop_back();
for (int Score : Scores) cout << Score << "\n";
Scores.erase(Scores.begin()+2);
for (int Score : Scores) cout << Score << "\n";
cout << Scores.size() << "\n";
cout << Scores.empty()<< "\n";
sort(v.begin(), v.end());
sort(v.begin(), v.end(), greater<int>()); // Sorts in descending order
}


