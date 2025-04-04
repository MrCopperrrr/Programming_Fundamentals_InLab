
int** transposeMatrix(int** matrix, int r, int c) {
    int** transpose_matrix = new int*[c];
    for (int i = 0; i < c; i++) {
        transpose_matrix[i] = new int[r];
        for (int j = 0; j < r; j++) {
            transpose_matrix[i][j] = matrix[j][i];
        }
    }
    if (r == 0 || c == 0) {// ko có matrix thì trả về nullptr
        return nullptr;
    }
    return transpose_matrix;
}