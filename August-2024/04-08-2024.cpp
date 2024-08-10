class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
std::vector<std::pair<int, int>> meetings(n);
        for (int i = 0; i < n; ++i) {
            meetings[i] = {end[i], start[i]};
        }

        // Step 2: Sort the meetings based on end time
        std::sort(meetings.begin(), meetings.end());

        // Step 3: Select meetings
        int count = 0; // Count of meetings that can be held
        int last_end_time = -1; // End time of the last selected meeting

        for (const auto& meeting : meetings) {
            int end_time = meeting.first;
            int start_time = meeting.second;

            // If the start time of the current meeting is greater than
            // the end time of the last selected meeting
            if (start_time > last_end_time) {
                count++; // Include this meeting
                last_end_time = end_time; // Update the end time
            }
        }

        return count;
    }
};