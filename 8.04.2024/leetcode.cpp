class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int cnt = 0;
        while (!students.empty() && cnt < students.size()) {
            if (students[0] == sandwiches[0]) {
                students.erase(students.begin());
                sandwiches.erase(sandwiches.begin());
                cnt = 0; // Reset cnt since a student got their preferred sandwich
            } else {
                students.push_back(students[0]);
                students.erase(students.begin());
                cnt++;
            }
        }
        return cnt;
    }
};