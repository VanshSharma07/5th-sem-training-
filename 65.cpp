#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct Meeting {
    int start;
    int end;
};

struct CompareMeetings {
    bool operator()(const Meeting& a, const Meeting& b) {
        return a.end > b.end; // Prioritize meetings ending earlier
    }
};

bool canAttendMeetings(vector<vector<int>>& intervals) {
    if (intervals.empty()) return true;

    priority_queue<Meeting, vector<Meeting>, CompareMeetings> pq;

    for (const auto& interval : intervals) {
        pq.push({interval[0], interval[1]});
    }

    Meeting current = pq.top();
    pq.pop();

    while (!pq.empty()) {
        if (current.end > pq.top().start) {
            return false;
        }
        current = pq.top();
        pq.pop();
    }

    return true;
}

int main() {
    vector<vector<int>> intervals = {{0, 30}, {5, 10}, {15, 20}};
    bool result = canAttendMeetings(intervals);
    cout << (result ? "true" : "false") << endl;

    return 0;
}
