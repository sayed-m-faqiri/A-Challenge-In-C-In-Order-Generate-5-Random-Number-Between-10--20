
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int includeCheck(int num, int a[], int count);

int main()
{
    srand(time(NULL));

    int numberInArray[5];
    int cycle = true;
    int i = 0;
    int count = 0;

    while (cycle == true)
    {
        int n = rand() % 100;

        if (n >= 10 && n <= 20)
        {
            if (count != 5)
            {
                if (includeCheck(n, numberInArray, count) == 0)
                {
                    numberInArray[i] = n;
                    i++;
                    count++;
                }
            }
            else
            {
                cycle = false;
                break;
            }
        }
    }

    for (int j = 0; j < 5; j++)
    {
        cout << numberInArray[j] << endl;
    }

    return 0;
}

int includeCheck(int num, int a[], int count)
{
    for (int i = 0; i < count; i++)
    {
        if (a[i] == num)
        {
            return 1;
        }
    }

    return 0;
}
