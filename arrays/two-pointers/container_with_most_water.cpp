class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,area,max_water=0;
        int right=(int)height.size()-1;
        while (left<right){
        area=(right-left)*min(height[left],height[right]);
        max_water=max(max_water,area);
        
            if (height[left]<height[right])
                left++;
            else
                right--;
            
            
            
        }
        return max_water;

        
    }
};
