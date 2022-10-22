#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main()
{
    vector<pair<int, int>> cut = { {9, 13}, {1,3}, {2,5}, {1,7}, {8, 12} };
    sort(cut.begin(), cut.end(), cmp);
    vector<pair<int, int>> res; 
    res.push_back(cut[0]);
    for (int i = 1; i < cut.size(); i++) {
        pair<int, int> p = res[res.size() - 1];
        if (cut[i].first > p.second) {
            res.push_back(cut[i]);
        } else {
            if (cut[i].second > p.second) {
                res[res.size() - 1].second = cut[i].second;
            }
        }
    }
    for (auto i : res) {
        cout << i.first << " " << i.second << endl;
    }
}
