class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
    //     unordered_map<int, int> count;  // To count occurrences of each value
    //     unordered_set<int> occurrences;  // To check for uniqueness of counts

    //     // Count occurrences of each value in the array
    //     for (int num : arr) {
    //         count[num]++;
    //     }

    //     // Check if all occurrence counts are unique
    //     for (auto& pair : count) {
    //         if (occurrences.find(pair.second) != occurrences.end()) {
    //             return false;  // Duplicate occurrence count found
    //         }
    //         occurrences.insert(pair.second);
    //     }

    //     return true;  // All counts are unique
    // }

     int ca[2001] = {0}; // Initialize all elements to 0

        // Step 2: Count occurrences of each number in the array
        for (int num : arr) {
            ca[num + 1000]++; // Offset by +1000 to handle negative indices
        }

        // Step 3: Sort the frequency array
        sort(ca, ca + 2001); // Sort the entire frequency array

        // Step 4: Check for duplicate non-zero frequencies
        for (int i = 0; i < 2000; i++) {
            if (ca[i] != 0 && ca[i] == ca[i + 1]) {
                return false; // Duplicate frequency found
            }
        }

        // Step 5: If no duplicates, return true
        return true;
    }
};
