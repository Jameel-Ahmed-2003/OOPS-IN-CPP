#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int mark1, mark2, mark3, total;
    float average;

public:
    void getData()
    {
        cout << "Enter mark1 mark2 and mark3 ;";
        cin >> mark1 >> mark2 >> mark3;
    }
    void calculate();
    void display()
    {
        cout << "Total marks obtained : " << total << endl;
        cout << "Average marks : " << average;
    }
};
void student::calculate()
{
    total = mark1 + mark2 + mark3;
    average = total / 3;
}
int main()
{
    student academics;
    academics.getData();
    academics.calculate();
    academics.display();
    return 0;
}