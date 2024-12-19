public class print_2D_matrix{
    public static void  print_mat(int [][] mat){
        for(int i=0; i<mat.length;i++){ // traversing rows
            for(int j=0; j< mat[0].length ;j++){ // traversing columns
                System.out.print(mat[i][j]); // printing elements
                System.out.print(" ");
            }
            System.out.println("");
        }
    }

    public static void main(String[] arg){
        int [][] arr = {{4,5},{6,7}}; //sample input of 2D array
        print_mat(arr);
    }
}