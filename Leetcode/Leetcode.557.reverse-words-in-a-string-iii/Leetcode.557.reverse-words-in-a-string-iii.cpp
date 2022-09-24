/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 *
 * https://leetcode.com/problems/reverse-words-in-a-string-iii/description/
 *
 * algorithms
 * Easy (79.79%)
 * Likes:    3363
 * Dislikes: 194
 * Total Accepted:    524.4K
 * Total Submissions: 654.6K
 * Testcase Example:  `"Let's take LeetCode contest"`
 *
 * Given a string s, reverse the order of characters in each word within a
 * sentence while still preserving whitespace and initial word order.
 * 
 * 
 * Example 1:
 * Input: s = "Let's take LeetCode contest"
 * Output: "s'teL ekat edoCteeL tsetnoc"
 * Example 2:
 * Input: s = "God Ding"
 * Output: "doG gniD"
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length <= 5 * 10^4
 * s contains printable ASCII characters.
 * s does not contain any leading or trailing spaces.
 * There is at least one word in s.
 * All the words in s are separated by a single space.
 * 
 * 
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
public:
    string reverseWords(string s) {
        const int kLength = s.length();
        int i = 0;
        while (i < kLength) {
            int head = i;
            int tail = 0;
            while (i < kLength && s.at(i) != ' ') {
                i++;
            }
            tail = i - 1;
            while (head < tail) {
                swap(s.at(head),s.at(tail));
                head++;
                tail--;
            }
            i++;
        }
        return s;
    }
};
// @lc code=end

