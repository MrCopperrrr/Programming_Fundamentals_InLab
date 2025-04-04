//2
void process(string fileName) {
    ifstream file(fileName);
    if (!file.is_open()) {
        return;
    }

    int N, M;
    file >> N >> M;

    double arr[N][M];

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            file >> arr[i][j];
        }
    }

    double maxRow[N]; 
    double maxOverall = arr[0][0]; 

    for (int i = 0; i < N; ++i) {
        maxRow[i] = arr[i][0]; 
        for (int j = 0; j < M; ++j) {
            if (arr[i][j] > maxRow[i]) {
                maxRow[i] = arr[i][j];
            }
            if (arr[i][j] > maxOverall) {
                maxOverall = arr[i][j];
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << maxRow[i] << " ";
    }
    cout << maxOverall << endl;

    file.close();
}