// #include <iostream>
// using namespace std;
// int main()
// {
//     string name;
//     cout << "enter ur name" << endl;
//     cin >> name;
//     cin.ignore(5);
//     getline(cin, name);
//     cout << "my name is " << name << endl;

//     return 0;
// }
#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cout << "Enter a comma-separated list: ";
    std::getline(std::cin, input, ',');
    std::cout << "You entered: " << input << std::endl;

    return 0;
}
