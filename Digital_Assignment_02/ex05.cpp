// Including the packages necessary for the program to work.
#include <bits/stdc++.h>

// Creating a class named matrix which we will use to store our matrices and perform operations on them.
using namespace std;
class Matrix
{
    public:                 // Creating three variables, namely the number of rows, the number of elements, and an integer  double pointer called elements.
        int rows, columns;
        int **elements;

    Matrix(int x, int y)    // Defining the constructor for this class.
    {
        rows = x;
        columns = y;

        elements = new int* [x];
        int i;
        for (i = 0; i < rows; i++) {
            elements[i] = new int [y];
        }
    }
    
    // The get_rows function returns the number of rows.
    int get_rows()
    {
        return rows;
    }

    // The get_columns function returns the number of columns;
    int get_columns()
    {
        return columns;
    }

    // The set function helps you set the value at a particular place of a matrix;
    // This function is enabled using pointer arithmetic.
    int set(int r, int c, int data)
    {
        elements[r][c] = data;
        return 0;
    }

    // the display functions helps us view the martix.
    int display()
    {
        int i = 0;
        int j = 0;
        for (i = 0; i < rows; i++) {
            for (j = 0; j < columns; j++) {
                cout << elements[i][j] << " ";
            }
            cout << "" << endl;
        }
        return 0;
    }

    // Creating a static matrix function that will help us add two martices.
    static Matrix addmatrix(Matrix mat1, Matrix mat2)
    {
    
        if (mat1.rows != mat2.rows || mat1.columns != mat2.columns) {
            cout << "Error! Matrices are of wrong order." << endl;
            // This function returns the first matrix if the martix operation returns an error.
            return mat1;
        } else {
            Matrix result_mat(mat1.rows, mat1.columns);
            int i, j;
            for (i = 0; i < mat1.rows; i++) {
                for (j = 0; j < mat1.columns; j++) {
                    result_mat.set(i, j, mat1.elements[i][j] + mat2.elements[i][j]);
                }
            }
            return result_mat;
        }
    }
    
    // Creating a static method that helps us multiply two matrices.
    static Matrix multiplymatrix(Matrix mat1, Matrix mat2)
    {
        if (mat1.columns != mat2.rows) {
            cout << "Error! Matrices are of wrong order." << endl;
            return mat1;
        } else {
            Matrix result_mat(mat1.rows, mat2.columns);
            int i, j;
            int l;
            int item;
            for (i = 0; i < result_mat.rows; i++) {
                for (j = 0; j < result_mat.columns; j++) {
                    item = 0;
                    for (l = 0; l < mat1.columns; l++) {
                        item += (mat1.elements[i][l] * mat2.elements[l][j]);
                    }
                    result_mat.set(i, j, item); 
                }
            }
            return result_mat;
        }
    }
};

// Issuing a few commands.
int main(int argc, char *argv[]) {
    Matrix mat1(2, 3);
    mat1.set(0, 0, 1);
    mat1.set(0, 1, 2);
    mat1.set(0, 2, 3);
    mat1.set(1, 0, 4);
    mat1.set(1, 1, 5);
    mat1.set(1, 2, 6);
    mat1.display();

    Matrix mat2(3, 2);
    mat2.set(0, 0, 7);
    mat2.set(0, 1, 8);
    mat2.set(1, 0, 9);
    mat2.set(1, 1, 10);
    mat2.set(2, 0, 11);
    mat2.set(2, 1, 12);
    mat2.display();

    Matrix mat3 = Matrix::addmatrix(mat1, mat2);
    mat3.display();

    Matrix mat4 = Matrix::multiplymatrix(mat1, mat2);
    mat4.display();
    
    return 0;
}
