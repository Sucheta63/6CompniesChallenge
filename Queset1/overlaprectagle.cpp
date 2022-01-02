//problem statement : Given two rectangles, find if the given two rectangles overlap or not. A rectangle is denoted by providing the x and y coordinates
//of two points: the left top corner and the right bottom corner of the rectangle. Two rectangles sharing a side are considered overlapping

class Solution {
  public:
    int doOverlap(int L1[], int R1[], int L2[], int R2[]) {
          if(L1[0]>R2[0] || L2[0]>R1[0])
           return false;
       if(L1[1]<R2[1] || L2[1]<R1[1])
           return false;
       return true;
    }
};
