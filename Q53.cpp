//  Find longest subarray after replacing one 0
#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int main()
{
    vector<int> arr{1, 1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1,0};
    int maxi = INT_MIN;
    int sum = 0;
    int i = 0;
    int j = 0;
    int cnt = 0;
    int ans = INT_MIN;
    while (j < arr.size())
    {
        sum += arr[j];
        if ((cnt == 0 && arr[j] == 0) || arr[j] == 1)
        {
            if(arr[j]==0)
            cnt=1;
        }
        else
        {
            if (maxi < sum)
            {
                maxi = sum;
                ans = j - i;
                while (arr[i] != 0)
                {
                    sum -= arr[i];
                    i++;
                }
                i++;
            }
            cout << "sum->> " << sum << endl;
            cnt = 1;
        }
        j++;
    }
    for (int k = i; k < j; k++)
        cout << arr[k] << " ";
    cout << ans;
    return 0;
}