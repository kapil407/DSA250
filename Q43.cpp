// 43. Find closest pair to a given target

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
int main()
{
    vector<int> arr{7, 13, 13, 17, 26, 30};
    int first = 0;
    int second = 0;
    int i = 0;
    int j = arr.size() - 1;
    int target = 25;
    int mindiff = INT_MAX;
    int diff = 0;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        int diff = abs(sum - target);
        if (diff < mindiff)
        {
            mindiff = diff;

            first = arr[i];
            second = arr[j];
            cout<<first<<" "<<second<<endl;
        }
        if (sum < target)
        {

            i++;
        }
        else if (sum > target)
        {
            j--;
        }
        else
            break;
    }
    cout << first << " " << second;
    return 0;
}