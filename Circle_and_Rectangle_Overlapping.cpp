class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int closest_x = max(x1, min(x2, xCenter));
        int closest_y = max(y1, min(y2, yCenter));
        int distance_x = closest_x - xCenter;
        int distance_y = closest_y - yCenter;
        return pow(distance_x,2) + pow(distance_y,2) <= pow(radius,2);
    }
};