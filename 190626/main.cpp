#include "hyeonseok.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
	// v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11}
	vector<int> v;
	for (int i=1; i<11; i++){
		v.push_back(i);
	}
	v.push_back(-11);
	vector<int> psum = partialSum(v);
	cout << "v: ";
	for (int i=0; i<v.size(); i++){
		cout << v.at(i) << " ";
	}
	cout << endl;
	cout << "rangeSum(3, 10): " << rangeSum(psum, 3, 10) << endl;
	cout << "rangeSum(0, 10): " << rangeSum(psum, 0, 10) << endl;
	cout << "rangeMean(3, 10): " << rangeMean(psum, 3, 10) << endl;
	cout << "rangeMean(0, 10): " << rangeMean(psum, 0, 10) << endl;

	vector<int> sq;
	for (int i=0; i<v.size(); i++){
		sq.push_back(v.at(i)*v.at(i));
	}
	vector<int> sqpsum = partialSum(sq);

	cout << "variance of v: " << variance(sqpsum, psum, 0, 10) << endl;

	vector<vector<int> > grid;
	for (int i=0; i<10; i++){
		vector<int> row;
		for (int j=0; j<10; j++){
			row.push_back(j+1);
		}
		row.push_back(i);
		grid.push_back(row);
	}
	for (int i=0; i<10; i++){
		for (int j=0; j<11; j++){
			cout << grid.at(i).at(j) << " ";
		}
		cout << endl;
	}
	vector<vector<int> > gridpsum;
	gridpsum = calcPsum(grid);
	cout << "gridsum of grid: " << gridSum(gridpsum, 0, 0, 9, 10) << endl;

	cout << "minAbs of v: " << minAbs(v) << endl;

	return 0;
}
