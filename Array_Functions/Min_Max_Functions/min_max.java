import java.util.ArrayList;

public class min_max {
    public static ArrayList<Integer> max_ind( int [] arr){
        int mx_ind = 0; //initializing the index with the max value as 0
        ArrayList<Integer> mx_ind_arr = new ArrayList<>();
        for(int i = 0; i< arr.length; i++){
            if(arr[i]> arr[mx_ind]){
                mx_ind=i; //updating the max index
                mx_ind_arr.clear();
                mx_ind_arr.add(i);
            }
            else if( arr[mx_ind]== arr[i]){
                mx_ind_arr.add(i); //handling edge cases in case of multiple max indexes
            }
        }
        return mx_ind_arr;
    }

    public static ArrayList<Integer> min_ind( int [] arr){
        int mn_ind = 0; //initialising the index with the minimum value as 0
        ArrayList<Integer> mn_ind_arr = new ArrayList<>();
        for(int i = 0; i< arr.length; i++){
            if(arr[i] < arr[mn_ind]){
                mn_ind=i; //updating the min index
                mn_ind_arr.clear();
                mn_ind_arr.add(i);
            }
            else if( arr[mn_ind]== arr[i]){
                mn_ind_arr.add(i);
            }
        }
        return mn_ind_arr;
    }

    public static void main(String[] args) {
        int [] k = {8,7,8,5,6,5}; //sample test case with edge case for max_ind and min_ind functions
        System.out.println(max_ind(k));
        System.out.println(min_ind(k));

    }
}