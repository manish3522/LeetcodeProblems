class CountIntervals {
public:
    map<int, int> m;
    int cnt = 0;
    void add(int left, int right) {
        auto it = m.upper_bound(left);
        if (it != begin(m) && prev(it)->second >= left) it = prev(it);
        if(it != end(m)) left = min(left, it->first);
        for (; it != end(m) && it->first <= right; ) {
            right = max(right, it->second);
            cnt -= it->second - it->first + 1;
            m.erase(it++);
        }
        cnt += right - left + 1;
        m[left] = right;
    }
    int count() { return cnt; }
};