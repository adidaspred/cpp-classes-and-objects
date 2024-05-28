#include <iostream>

using namespace std;

// Function to add two matrices
void addMatrices(int A[][100], int B[][100], int C[][100], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      C[i][j] = A[i][j] + B[i][j];
    }
  }
}

// Function to multiply two matrices
void multiplyMatrices(int A[][100], int B[][100], int C[][100], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      C[i][j] = 0;
      for (int k = 0; k < n; k++) {
        C[i][j] = A[i][k] * B[k][j];
      }
    }
  }
}

// Function to print a matrix
void printMatrix(int A[][100], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << A[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int n;

  cout << "Enter the order of the matrices: ";
  cin >> n;

  int A[100][100], B[100][100], C[100][100];

  cout << "Enter the elements of matrix A:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> A[i][j];
    }
  }

  cout << "Enter the elements of matrix B:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> B[i][j];
    }
  }

  // Add the matrices
  addMatrices(A, B, C, n);
  cout << "Matrix A + Matrix B:" << endl;
  printMatrix(C, n);

  // Multiply the matrices
  multiplyMatrices(A, B, C, n);
  cout << "Matrix A * Matrix B:" << endl;
  printMatrix(C, n);

  return 0;
}