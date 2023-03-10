class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int counts =0;
        for(int i=0;i<seats.size();i++){
            if(seats[i]>students[i]){
                counts += (seats[i] - students[i]);
            }
            else{
                counts += (students[i] - seats[i] );
            }
        }
        return counts;
    }
};