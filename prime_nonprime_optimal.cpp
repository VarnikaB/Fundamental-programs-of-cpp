// prime or non prime no.

// SAMPLE OUTPUT 1:
// enter a number:
// 75
// non-prime

// SAMPLE OUTPUT 2:
// enter a number:
// 23
// prime

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     int flag = 0;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     for (int i = 2; i < sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "non-prime" << endl;
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 0)
//     {
//         cout << "prime" << endl;
//     }

//     return 0;
// }

// #1
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     int flag = 0;

//     cout << "enter a number:" << endl;
//     cin >> n;

//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "Non-prime" << endl;
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 0)
//     {
//         cout << "prime" << endl;
//     }

//     return 0;
// }

// #2
// #include <iostream>
// #include <cmath>

// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     bool flag = 0;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "non-prime" << endl;
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 0)
//     {
//         cout << "prime" << endl;
//     }

//     return 0;
// }

// #3
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter a  number: " << endl;
//     cin >> n;

//     bool flag = 0;
//     for (int i = 2; i < sqrt(n); i++)
//     {
//         if (i % n == 0)
//         {
//             cout << "non prime" << endl;
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 0)
//     {
//         cout << "Prime Number" << endl;
//     }
// }

// #4
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     bool flag = 0;
//     for (int i = 2; i < sqrt(n); i++)
//     {
//         if (i % n == 0)
//         {
//             cout << "non prime" << endl;
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         cout << "prime" << endl;
//     }
//     return 0;
// }

// #5
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;
//     bool flag = 0;
//     for (int i = 0; i < sqrt(n); i++)
//     {
//         if (i % n == 0)
//         {
//             cout << "non prime number" << endl;
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//     {
//         cout << "prime number" << endl;
//     }
//     return 0;
// }

// #6
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cout << "enter a number: " << endl;
    cin >> n;

    int flag = 0;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (i % n == 0)
        {
            cout << "non-prime number" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime number" << endl;
    }
    return 0;
}