// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.
/*intervals = [[1,3],[2,6],[8,10],[15,18]]
        result:[[1,6],[8,10],[15,18]]
        [[1,4], [2,5], [7,9], [8,12], [13,15], [14,18], [20,22], [21,25]]
        o/p->>[[1,5], [7,12], [13,18], [20,25]]
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Compare
{
public:
    bool operator()(pair<int, int> &v1, pair<int, int> &v2)
    {
        return v1.first < v2.first;
    }
};

int main()
{

    vector<pair<int, int>> arr{{1, 4}, {2, 5}, {7, 10}, {8, 12}, {7, 15}, {14, 18}, {20, 22}, {21, 25}};
    vector<pair<int, int>> ans;
    sort(arr.begin(), arr.end(), Compare());
    int i = 0;
    int j = 1;
    while (j < arr.size())
    {
        int first_ele = arr[i].first;
        int last_ele = arr[i].second;
        while (j < arr.size() && last_ele >= arr[j].first)
        {
            last_ele = max(last_ele, arr[j].second);
            j++;
        }

        ans.push_back({first_ele, last_ele});
        i = j;
        j++;
    }
    if (i == arr.size() - 1)
    {
        ans.push_back(arr[i]);
    }
    for (auto val : ans)
    {
        cout << val.first << " " << val.second << endl;
    }
    return 0;
}
