#include <iostream>
#include <list>
using namespace std;

list<int> list1; 
list<int>::iterator it;

int main_question();
int addition(int length);
int subtract(int length);
int Multiplication(int length);
int Division(int length);

int main(void)
{
    bool truth = true;

   
    while(truth != false)
    {
    cout << "Please enter the number: ";
    int i;
    cin >> i;
    list1.push_back(i);
    
    cout << "If you are done entering number type 'false'.";
    string answer;
    cin >> answer;
    }
    
    int answer = main_question();
    
    if (answer == 1)
    {
        addition(list1.size());
    }
    else if (answer == 2)
    {
        subtract(list1.size());
    }
    else if (answer == 3)
    {
        Multiplication(list1.size());
    }
    else if (answer == 4)
    {
        Division(list1.size());
    }
}

int main_question()
{
    cout << "What kind of calculations do you want to do?";

    cout << "1 = Addition\n";
    cout << "2 = Subtract\n";
    cout << "3 = Multiplication\n";
    cout << "4 = Division";

    int answer;
    cin >> answer; 
    
    return answer;
}

int addition(int length)
{
    int sum = 0;
    /*
    for (int i = 0; i < length; i++)
    {    
        sum += list1[i];
    }
    */
    for(it = list1.begin();it != list1.end();it++)
    { 
        sum += *it;
    }   

    return sum;
}

int subtract (int length)
{
    int sum = 0;
    for(it = list1.begin();it != list1.end();it++)
    { 
        sum -= *it;
    }   
    return sum;
}
int Multiplication (int length)
{
    int sum = 0;
    for(it = list1.begin();it != list1.end();it++)
    { 
        sum *= *it;
    }   
    return sum;
}

int Division (int length)
{
    int sum = 0;
    for(it = list1.begin();it != list1.end();it++)
    { 
        sum /= *it;
    }  
    
    return sum;
}
