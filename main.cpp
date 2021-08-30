#include <iostream>
#include <string>
using namespace std;

int hello1Function(string name1);
int hello2Function(string name2);
int hello3Function(string name2);

int main()
{
    string name1 = "Samyar Dastmalchi";
    hello1Function(name1);
    string name2 = "Parham Sharafoleslami";
    hello2Function(name2);
    string name3 = "Seth Tran";
    hello2Function(name3);
    return 0;
}
