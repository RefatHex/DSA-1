#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> item1, pair<int, int> item2) {
    double ratio1 = (double)item1.first / item1.second;
    double ratio2 = (double)item2.first / item2.second;
    return ratio1 > ratio2;
}

int main() {
    int n;
    cin >> n;

    vector<pair<int, int> > items(n);

    for (int i = 0; i < n; ++i) {
        cin >> items[i].first >> items[i].second;
    }

    int limit;
    cin >> limit;

    sort(items.begin(), items.end(), compare);

    int currentWeight = 0;
    double totalValue = 0.0;
    int i = 0;
    while (currentWeight < limit && i < n) {
        if (currentWeight + items[i].second <= limit) {

            currentWeight += items[i].second;
            totalValue += items[i].first;
        } else {
            double remainingCapacity = limit - currentWeight;
            totalValue += items[i].first * (remainingCapacity / items[i].second);
            currentWeight = limit;
        }
        i++;
    }

    cout << totalValue << endl;

    return 0;
}
