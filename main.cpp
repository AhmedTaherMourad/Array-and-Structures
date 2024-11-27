#include <iostream>
using namespace std;
struct StrInfo {
  string FirstName;
  string LastName;
  int Age;
  string Phone;
};
void ReadInfo(StrInfo Info []) {

  cout << "Please, Enter The Info[0].FirstName.\n\n";
  cin >> Info[0].FirstName;
  cout << "\n\n";
  cout << "Please, Enter The Info[0].LastName.\n\n";
  cin >> Info[0].LastName;
  cout << "\n\n";
  cout << "Please, Enter The Info[0].Age.\n\n";
  cin >> Info[0].Age;
  cout << "\n\n";
  cout << "Please, Enter The Info[0].Phone.\n\n";
  cin >> Info[0].Phone;
  cout << "\n\n";
  cout << "Please, Enter The Info[1].FirstName.\n\n";
  cin >> Info[1].FirstName;
  cout << "\n\n";
  cout << "Please, Enter The Info[1].LastName.\n\n";
  cin >> Info[1].LastName;
  cout << "\n\n";
  cout << "Please, Enter The Info[1].Age.\n\n";
  cin >> Info[1].Age;
  cout << "\n\n";
  cout << "Please, Enter The Info[1].Phone.\n\n";
  cin >> Info[1].Phone;
  cout << "\n\n";
}
void PrintInfo(StrInfo Info []) {
  cout << "The FirstName is : " << Info[0].FirstName << "\n\n";
  cout << "The LastName is : " << Info[0].LastName << "\n\n";
  cout << "The Age is : " << Info[0].Age << " Years\n\n";
  cout << "The Phone is : " << Info[0].Phone << "\n\n";
  cout << "********************************************\n";
  cout << "********************************************\n\n";
  cout << "The FirstName is : " << Info[1].FirstName << "\n\n";
  cout << "The LastName is : " << Info[1].LastName << "\n\n";
  cout << "The Age is : " << Info[1].Age << " Years\n\n";
  cout << "The Phone is : " << Info[1].Phone << "\n\n";
  cout << "********************************************\n\n";
}
int main () {
    cout << "\n********************************************\n\n";
    StrInfo Info[2];
    ReadInfo(Info);
    PrintInfo(Info);
    return 0;
}































