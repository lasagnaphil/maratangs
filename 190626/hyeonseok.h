#include <algorithm>
#include <vector>
using namespace std;

vector<int> partialSum(vector<int> a);
int rangeSum(vector<int> psum, int a, int b);
double rangeMean(vector<int> psum, int a, int b);
double variance(vector<int> sqpsum, vector<int> psum, int a, int b);
vector<vector<int> > calcPsum(vector<vector<int> > arr);
int gridSum(vector< vector<int> > psum, int y1, int x1, int y2, int x2);
int minAbs(vector<int> a);
