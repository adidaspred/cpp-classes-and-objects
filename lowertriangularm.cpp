#include <iostream>

using namespace std;

void LowerTriangle(int A[][100], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i < j) {
        A[i][j] = 0;
      }
    }
  }
}

// Function to print the matrix
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

  cout << "Enter the order of the matrix: ";
  cin >> n;

  int A[100][100];

  cout << "Enter the matrix elements:" << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> A[i][j];
    }
  }

  // Convert the matrix to lower triangular form
  LowerTriangle(A, n);

  cout << "Lower triangular matrix:" << endl;
  printMatrix(A, n);

  return 0;
}