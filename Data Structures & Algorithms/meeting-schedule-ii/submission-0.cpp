/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */
bool cmp(Interval a, Interval b) {
        return a.start < b.start;
    }

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        const int n = intervals.size();
        if (n == 0) return 0;

        int start[n], end[n];

        for (int i { 0 }; i < n; i ++){
            start[i] = intervals[i].start;
            end[i] = intervals[i].end ;
        }
        //sorting the arrays
        sort(start, start + n);
        sort(end, end + n);

        int count = 0, rooms = 0;
        int sp = 0, ep = 0;

        while (sp < n){
            if (start[sp] < end[ep]){
                sp++;
                count++ ;
            } else {
                ep++;
                count--;
            }
            rooms = max(rooms, count);
        }
        return rooms;
    }
};
