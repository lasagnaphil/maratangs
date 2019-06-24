/**
 * 브랜치 이름: 190626/본인 이름
 * 
 * 머지 원칙: 스쿼시
 * (커밋은 몇 개를 만드셔도 상관 없습니다
 * 대신 마지막에 머지할 때는 스쿼시 머지해 주세요)
 * 
 * 머지 기준: 2명 이상의 Approve
 * (다른 사람들의 코드를 꼼꼼히 리뷰해 줍시다)
 * 
 * C++이 아닌 언어로 작성할 경우, 주석은 그대로 두시고
 * 함수 프로토타입이 최대한 같게 작성해 주세요.
 * 
 * 질문이 있는 경우, github의 issue 란에
 * help wanted, homework, question 등의 label을 붙여서 올려주시면 됩니다.
 */

/**
 * 1. 부분 합 구하는 함수 작성하기
 * intput: vector<int> a
 * output: vector<int>형
 * output[i] = a[0]부터 a[i]까지의 합 
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
 * (y가 세로 == 행, x가 가로 == 열)
 * arr[y][x] 포함
 */

vector<int> calcPsum(vector<vector <int> > arr) {
    // TODO
}

/**
 * 6. 2차원 배열에서 부분 합 구하기
 * gridSum(psum, y1, x1, y2, x2) = psum이 주어졌을 때,
 * arr[y1][x1]부터 arr[y2][x2]까지의 합
 */

int gridSum(vector<vector <int> > psum, int y1, int x1, int y2, int x2) {
    // TODO
}

/**
 * 7. 배열이 주어졌을 때,
 * 합이 0에 가장 가까운 구간을 찾아서
 * 합을 반환하기
 */

int minAbs(vector<int> a) {
    // TODO
}

/** 
 * 8. 크리스마스 문제
 * https://algospot.com/judge/problem/read/CHRISTMAS
 */
