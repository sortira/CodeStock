public class lower_bound_bs{
    public static Integer lb_bs(int [] arr, int target){
        int beg =0;
        int end = arr.length -1;
        
        while(beg<=end){
            int mid = (beg+end)/2;
            if (arr[mid] < target){
                beg = mid+1; //searching in the right half for a greater element
            }
            else{
                end = mid-1; //searching in the left half for a smaller element
            }
        }
        return beg;
    }

public static void main(String[] args){
    int [] arr = {3,4,4,7,9,65,74,98}; //sample input 
    System.out.print(lb_bs(arr, 10));
}
};