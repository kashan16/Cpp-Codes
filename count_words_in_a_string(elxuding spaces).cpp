#include <iostream>
#include <cstring>
using namespace std;

int countWords(string input)
{
    // Write your code here
    int count = 0;
    if(input.length() == 0)
    {
        return 0;
    }
    for(int i = 0 ; i < input.length() ; i++)
    {
        count++;
        //to include spaces in count remove the if statement
        if(input[i] == ' ')
        {
            count--;
        }
    }
    return count;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}
