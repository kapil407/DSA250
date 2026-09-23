// Find first negative number in every window of size K
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1, -2, 3, 5, 8, -9, 10, -12, 16};

    int k = 3;
    int i = 0;
    int j = 0;
    vector<int> ans;

    while (j < arr.size())
    {

        if ((j - i + 1) == k)
        {
            int x = i;
            while (x <= j)
            {
                if (arr[x] < 0)
                {

                    ans.push_back(arr[x]);
                    break;
                }
                x++;
            }
            if (x > j)
            {
                ans.push_back(0);
            }
            i++;
        }
        j++;
    }
    for (auto val : ans)
        cout << val << " ";

    return 0;
}