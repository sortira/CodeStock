def print_matrix(mat):
    for i in mat: #traversing the rows
        for j in i: # traversing the columns
            print(j,end=" ") #printing the elements
        print()

if __name__ == "__main__":
    print_matrix([[1,2],[2,5]]) #sample input of 2D matrix