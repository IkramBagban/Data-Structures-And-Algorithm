// Author: Ikram Bagban
// Email: bagbanikram@gmail.com
// GitHub: https://github.com/ikrambagban
// question link :- https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/

class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        // Initialize variables to keep track of pickups and travels for each type of garbage.
        int pickM = 0;
        int pickP = 0;
        int pickG = 0;

        int travelM = 0;
        int travelP = 0;
        int travelG = 0;

        // Variables to store the last index of each type of garbage found.
        int lastM = 0;
        int lastP = 0;
        int lastG = 0;

        // Iterate through the list of garbage locations.
        for (int i = 0; i < garbage.size(); i++) {
            string currGarbage = garbage[i];

            // Iterate through each character in the current garbage location.
            for (auto ch : currGarbage) {
                // Check the type of garbage and update pickup counts and last index accordingly.
                if (ch == 'M') {
                    pickM++;
                    lastM = i;
                } else if (ch == 'P') {
                    pickP++;
                    lastP = i;
                } else if (ch == 'G') {
                    pickG++;
                    lastG = i;
                }
            }
        }

        // Calculate the total travel distances for each type of garbage.
        for (int i = 0; i < lastM; i++) {
            travelM += travel[i];
        }

        for (int i = 0; i < lastP; i++) {
            travelP += travel[i];
        }

        for (int i = 0; i < lastG; i++) {
            travelG += travel[i];
        }

        // Calculate the total answer by adding pickup counts and travel distances.
        int ans = (pickM + travelM) + (pickP + travelP) + (pickG + travelG);
        return ans;
    }
};
