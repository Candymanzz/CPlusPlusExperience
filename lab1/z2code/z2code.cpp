#include <iostream>

void inputMatrix(int **matrix, int n)
{
  std::cout << "Enter size matrix (" << n << "x" << n << "):" << std::endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      std::cin >> matrix[i][j];
    }
  }
}

void outputMatrix(int **matrix, int n)
{
  std::cout << "Matrix: " << std::endl;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      std::cout << matrix[i][j] << " ";
    }
    std::cout << std::endl;
  }
}

void transposeMatrix(int **matrix, int **transposed, int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      transposed[j][i] = matrix[i][j];
    }
  }
}

void multiplyMatrices(int **A, int **B, int **result, int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      result[i][j] = 0; 
      for (int k = 0; k < n; k++)
      {
        result[i][j] += A[i][k] * B[k][j]; 
      }
    }
  }
}

int **subtractMatrices(int **A, int **B, int n)
{
  int **result = new int *[n]; 
  for (int i = 0; i < n; ++i)
  {
    result[i] = new int[n];
    for (int j = 0; j < n; ++j)
    {
      result[i][j] = A[i][j] - B[i][j];
    }
  }
  return result;
}

void freeMatrix(int **matrix, int n)
{
  for (int i = 0; i < n; ++i)
  {
    delete[] matrix[i];
  }
  delete[] matrix;
}

int main()
{
  int n;
  std::cout << "Enter n: ";
  std::cin >> n;

  int **A = new int *[n];
  int **B = new int *[n];
  int **AT = new int *[n];
  int **BT = new int *[n];
  int **BT_A = new int *[n];

  for (int i = 0; i < n; ++i)
  {
    A[i] = new int[n];
    B[i] = new int[n];
    AT[i] = new int[n];
    BT[i] = new int[n];
    BT_A[i] = new int[n];
  }

  std::cout << "Matrix A:" << std::endl;
  inputMatrix(A, n);
  std::cout << "Matrix B:" << std::endl;
  inputMatrix(B, n);

  transposeMatrix(A, AT, n);
  transposeMatrix(B, BT, n);

  // B^T * A
  multiplyMatrices(BT, A, BT_A, n);

  // C = A^T - B^T * A
  int **C = subtractMatrices(AT, BT_A, n); 

  std::cout << "Result C = A^T - B^T * A:" << std::endl;
  outputMatrix(C, n);

  freeMatrix(A, n);
  freeMatrix(B, n);
  freeMatrix(AT, n);
  freeMatrix(BT, n);
  freeMatrix(BT_A, n);
  freeMatrix(C, n); 
  
  return 0;
}