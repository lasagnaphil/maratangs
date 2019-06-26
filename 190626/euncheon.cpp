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
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/**
 * 1. 부분 합 구하는 함수 작성하기
 * intput: vector<int> a
 * output: vector<int>형
 * output[i] = input[0]부터 input[i]까지의 합 
 */

vector<int> partialSum(vector<int> a) {
    // TODO
    
    if(a.empty()){
        cout << "empty vector" << endl;
        exit(0);
    }
    
    vector<int> retVec; // return vector
    retVec.push_back(a[0]);
    for(int i = 1; i < a.size(); i++){
        retVec.push_back(a[i] + retVec[i-1]);
    }
    return retVec;
}

/**
 * 2. 부분 합 벡터가 주어질 때,
 * 원래 벡터의 인덱스 a부터 인덱스 b까지의 구간 합 구하기
 * input: vector<int> psum (어떤 벡터 v의 부분 합이 저장되어 있는 벡터)
 * output: int형 (v[a]부터 v[b]까지의 합)
 */

int rangeSum(vector<int> psum, int a, int b) {
    // TODO
    if(a == 0) return psum[b];

    return psum[b] - psum[a-1];
}

/**
 * 3. rangeSum을 이용해, 인덱스 a부터 인덱스 b까지의 평균 구하기
 */

int rangeMean(vector<int> psum, int a, int b) {
    // TODO
    return rangeSum(psum, a, b) / (b-a+1);
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
    int mean = rangeMean(psum, a, b);
    int sqmean = rangeMean(sqpsum, a, b);
    double res = (double)sqmean - (double)(mean*mean);
    return res;
}

/**
 * 5. 2차원 배열에서 부분 합 구하기
 * psum[y][x] = (0, 0)부터 (y, x)까지의 합
 * (y가 세로 == 행, x가 가로 == 열)
 * arr[y][x] 포함
 */

vector<int> calcPsum(vector<vector <int> > arr) {
    // TODO
    int M = arr.size();
    int N = arr.at(0).size();

    vector<int> psum2D(M*N); // M*N크기의 벡터
    for(int i = 0; i <= M; i++){
        for(int j = 0; j < N; j++){
            if(i==0 && j==0)
                psum2D[0] = arr[0][0];
            else
                psum2D[i*N + j] = arr[i][j] + psum2D[i*N + j - 1];
        }
    }
    return psum2D;
}

/**
 * 6. 2차원 배열에서 부분 합 구하기
 * gridSum(psum, y1, x1, y2, x2) = psum이 주어졌을 때,
 * arr[y1][x1]부터 arr[y2][x2]까지의 합
 */

int gridSum(vector<vector <int> > psum, int y1, int x1, int y2, int x2) {
    // TODO
    return psum[y2][x2] - psum[y1 - 1][x1 - 1];
}

/**
 * 7. 배열이 주어졌을 때,
 * 합이 0에 가장 가까운 구간을 찾아서
 * 합을 반환하기
 */

int minAbs(vector<int> a) {
    // TODO
    vector<int> psum = partialSum(a);
    //크기순 정렬
    sort(psum.begin(), psum.end());
    int min = psum[0];
    //차이 가장 작은 구간 찾기
    for(int i=1; i<psum.size(); i++){
        if(psum[i] - psum[i-1] < min)
            min = psum[i] - psum[i-1];
    }
    return min;
}

/** 
 * 8. 크리스마스 문제
 * https://algospot.com/judge/problem/read/CHRISTMAS
 */

void christmasProblem(){
    int T, N, K;

    scanf("%d", &T);
    while(T--){
        vector<int> input;
        vector<int> psum;
        int cnt1 = 0; //1번 문제 답
        int cnt2 = 0; //2번 문제 답
        int val;
        scanf("%d %d", &N, &K);

        //input: 각 인형 상자에 들어있는 인형의 개수
        for(int i=0; i<N; i++){
            scanf("%d", &val);
            input.push_back(val);
        }

        //get partial sum vector
        psum = partialSum(input);
        vector<int> rangeSumVec;
        //2번 잘 모르겠음 ㅠㅠ
        // ;
        // for(int i=0; i<N; i++){
        //     for(int j=i; j<N; j++){
        //         rangeSumVec.push_back(&input, i, j);
        //     }
        // }

        //1번 문제에 대한 답 구하기
        for(int i=0; i<rangeSumVec.size(); i++){
            if(rangeSumVec[i] % K == 0)
                cnt1++;
        }

        //2번 문제에 대한 답 구하기
        
        // 2번 풀이 생각한 것
        // 0. 인덱스를 두 개 준비한다(left=0, right=0 으로 시작)
        // 1. 일단 처음 수가 K의 배수면 집어넣고 left를 갱신해서 그게 다시 포함이 안 되도록 함
        // 2. K의 배수가 아니면 right만 갱신한다
        int left = 0; int right = 0;

        while(left <= right && right < N){
            if(left == right){
                if(psum[right] % K == 0) {
                    cnt2++;
                    left = right+1;
                    right = left;
                }
                else right++;
            }
            else if(left < right){
                bool flag = false;
                for(int k = left; k <= right; k++){
                    if(rangeSum(psum, k, right) % K == 0){
                        cnt2++;
                        left = right+1;
                        right = left;
                        flag = true;
                        break;
                    }
                }
                if(!flag)
                    right++;
            }
        }

        //답 출력
        printf("%d %d\n", cnt1 % 20191101, cnt2);
    }
}

int main(void){
    vector<int> v;
    for(int i=0; i<10; i++){
        v.push_back(i);
    }

    return 0;
}