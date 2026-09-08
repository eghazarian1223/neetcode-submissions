class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0;
        int r = s.size() - 1;
        while (l <= r) {
            // e
            char temp = s.at(r);
            s.at(r) = s.at(l); // e
            s.at(l) = temp; // e
            ++l;
            --r;
        }
        
    }
};