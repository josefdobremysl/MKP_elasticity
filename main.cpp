#include <Eigen/Sparse>

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <tuple>

using namespace Eigen;
using namespace std;

int main() {
	// Vytvoøení matice basisFE_ref
	vector<vector<double>> basisFE_ref = {
		{0.5, 0.0, 0.5,   0,   0,   0},
		{0.5, 0.5, 0.0,   0,   0,   0},
		{0.0, 0.5, 0.5,   0,   0,   0},
		{  0,   0,   0, 0.5, 0.0, 0.5},
		{  0,   0,   0, 0.5, 0.5, 0.0},
		{  0,   0,   0, 0.0, 0.5, 0.5}
	};
	// PD podle X baz. fci v kvadr. uzlech
	vector<vector<double>> gradFEx_ref = {
		{-1, -1, -1,  0,  0,  0},
		{ 1,  1,  1,  0,  0,  0},
		{ 0,  0,  0,  0,  0,  0},
		{ 0,  0,  0, -1, -1, -1},
		{ 0,  0,  0,  1,  1,  1},
		{ 0,  0,  0,  0,  0,  0}
	};
	// PD podle Y baz. fci v kvadr. uzlech
	vector<vector<double>> gradFEy_ref = {
		{-1, -1, -1,  0,  0,  0},
		{ 0,  0,  0,  0,  0,  0},
		{ 1,  1,  1,  0,  0,  0},
		{ 0,  0,  0, -1, -1, -1},
		{ 0,  0,  0,  0,  0,  0},
		{ 0,  0,  0,  1,  1,  1}
	};

}