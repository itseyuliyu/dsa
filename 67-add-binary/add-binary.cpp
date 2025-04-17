class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        int i = a.size() - 1, j = b.size() - 1;
        int carry = 0;

        // Traverse both strings from right to left
        while (i >= 0 || j >= 0 || carry) {
            int bit_a = (i >= 0) ? a[i] - '0' : 0;
            int bit_b = (j >= 0) ? b[j] - '0' : 0;

            // Calculate the sum of bits and carry
            int sum = bit_a + bit_b + carry;

            // The new bit to append is sum % 2
            result.push_back((sum % 2) + '0');

            // Update carry
            carry = sum / 2;

            // Move to the previous bit in both strings
            i--;
            j--;
        }

        // Reverse the result to get the correct order
        reverse(result.begin(), result.end());
        return result;
    }
};
