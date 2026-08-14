class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()){
            return false;
        }

        string concat = s+s;
        int index = concat.find(goal);
        if(index == -1) {
            return false;
        }
        else return true;
    }
};