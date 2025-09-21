#include <bits/stdc++.h>
using namespace std;

class StockSpanner {
private:
    stack<pair<int, int>> st; // pair: {price, span}

public:
    StockSpanner() {}

    int next(int price) {
        int span = 1;

        // Merge spans of previous prices <= current price
        while (!st.empty() && st.top().first <= price) {
            span += st.top().second;
            st.pop();
        }

        st.push({price, span});
        return span;
    }
};

int main() {
    StockSpanner stockSpanner;

    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    for (int price : prices) {
        cout << stockSpanner.next(price) << " ";
    }
    cout << endl;

    return 0;
}
