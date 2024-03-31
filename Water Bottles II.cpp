class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int a = 0;
        int b = 0;
        int x = 1;

        while (x != 0) {
            if (a == 0 && numBottles != 0) {
                b += numBottles;
                a += numBottles;
                numBottles = 0;
            }
            if (a >= numExchange) {
                numBottles++;
                a -= numExchange;
                numExchange++;
            }
            if (a < numExchange && numBottles == 0) {
                break;
            }
            if ((numBottles != 0 && a != 0) && (a < numExchange)) {
                a += numBottles;
                b += numBottles;
                numBottles = 0;
            }
        }
        return b;
    }
};
