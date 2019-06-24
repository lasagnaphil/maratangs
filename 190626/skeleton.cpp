/**
 * 1. 부분 합 구하는 함수 작성하기
 * intput: vector<int> a
 * output: vector<int>형
 * output[i] = input[0]부터 input[i]까지의 합 
 */

vector<int> partialSum(vector<int> a) {
    // TODO
}

/**
 * 2. 부분 합 벡터가 주어질 때,
 * 원래 벡터의 인덱스 a부터 인덱스 b까지의 구간 합 구하기
 * input: vector<int> psum (어떤 벡터 v의 부분 합이 저장되어 있는 벡터)
 * output: int형 (v[a]부터 v[b]까지의 합)
 */

int rangeSum(vector<int> psum, int a, int b) {
    // TODO
}

/**
 * 3. rangeSum을 이용해, 인덱스 a부터 인덱스 b까지의 평균 구하기
 */

int rangeMean(int a, int b) {
    // TODO
}

/**
 * 4. 배열의 제곱의 부분 합 sqpsum,
 * 배열의 부분 합 psum,
 * rangeSum, rangeMean이 주어졌을 때
 * 인덱스 a, b 구간의 분산(variance)을 구하는 코드
 * [?] 제곱의 부분 합은 어떻게 구할까요?
 */

double variance(vector<int> sqpsum, vector<int> psum, int a, int b) {
    // TODO
}

/**
 * 5. 2차원 배열에서 부분 합 구하기
 * psum[y][x] = (0, 0)부터 (y, x)까지의 합
 * y, x 좌표 순서가 행, 렬 거꾸로 되어 있는 이유는
 * y축을 세로로 주기 위해서일 뿐임~~
 */

int gridSum(vector<vector <int> > psum, int y1, int x1, int y2, int x2) {
    // TODO
}

/**
 * 5. 2차원 배열에서 부분 합 구하기
 * psum[y][x] = (0, 0)부터 (y, x)까지의 합
 * y, x 좌표 순서가 행, 렬 거꾸로 되어 있는 이유는
 * y축을 세로로 주기 위해서일 뿐임~~
 */

int gridSum(vector<vector <int> > psum, int y1, int x1, int y2, int x2) {
    // TODO
}



/**
 * 6. 배열이 주어졌을 때 합이 0에 가장 가까운 구간을 찾아서
 * 합을 반환하기
 */

int minAbs(vector<int> a) {
    // TODO
}
