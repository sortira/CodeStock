public class min_max {
    public static Integer max_ind( int [] arr){
        int mx_ind = 0; //initializing the index with the max value as 0
        for(int i = 0; i< arr.length; i++){
            if(arr[i]> arr[mx_ind]){
                mx_ind=i; //updating the max index
            }
        }
        return mx_ind;
    }

    public static Integer min_ind( int [] arr){
        int mn_ind = 0; //initialising the index with the minimum value as 0
        for(int i = 0; i< arr.length; i++){
            if(arr[i] < arr[mn_ind]){
                mn_ind=i; //updating the min index
            }
        }
        return mn_ind;
    }

    public static void main(String[] args) {
        int [] k = {7,8,5,6}; //sample test case with edge case for max_ind and min_ind functions
        System.out.println(max_ind(k));
        System.out.println(min_ind(k));
    }
}