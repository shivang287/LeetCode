class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;
int i = 0;

while (i < n) {
    char ch = chars[i];
    int cnt = 0;

    while (i < n && chars[i] == ch) {
        cnt++;
        i++;
    }

    chars[write++] = ch;

    if (cnt > 1) {
        string s = to_string(cnt);
        for (char c : s)
            chars[write++] = c;
    }
}

return write;
    }
};