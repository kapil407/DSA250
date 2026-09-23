//  Left rotate array by one
// Right rotate array by K positions

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, 4, 5, 2, 3, 8};
    int k = 2;
    while (k--)
    {
        int ele = arr[0];
        for (int i = 0; i < arr.size()-1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[arr.size() - 1] = ele;
    }
    for (auto val : arr)
        cout << val << " ";
    return 0;
}