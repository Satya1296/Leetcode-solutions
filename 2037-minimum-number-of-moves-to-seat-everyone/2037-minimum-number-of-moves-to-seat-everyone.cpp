class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end()); // 1 3 5
        sort(students.begin(),students.end()); // 2 7 4 
        int sum=0;
        for(int i=0;i<seats.size();i++){
            sum+=abs(seats[i]-students[i]);
        }
        return sum;
    }
};