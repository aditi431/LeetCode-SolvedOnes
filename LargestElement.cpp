// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {

//     int arr[5] = {3, 2, 1, 5, 6};
//     int largest;
//     int i, j;
//     for (i = 0; i < 5; i++)
//     {
//         for (j = i + 1; j < 5; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 largest = arr[i];

//             }
//             else
//             {
//                 largest = arr[j];
//             }
//         }
//     }
//     cout<<"Largest element is : "<<largest;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {3, 2, 1, 5, 2};
    int largest = arr[0];

    for (int i = 1; i < 5; i++)
    {

        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "Largest element is: " << largest;
}