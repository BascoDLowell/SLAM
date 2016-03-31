/******************************************************************************
Author		: Lichao Ma
Date  		: Mar 31,2016
Version		: v0.1
Built		: Eclipse CDT, -std=c++11
Description :
	Rapidly-Exploring Random Tree Searching Algorithm.
*****************************************************************************/

#ifndef RRT_H_
#define RRT_H_



#include "MapSearch.h"

namespace SearchAlgorithms{
using namespace std;

class RRTSearch: public MapSearch{
public:
	struct DPPoint{
		Point<unsigned int> point;
		int cost;
		DPPoint(const Point<unsigned int> &p,unsigned int cost):
			point(p),cost(cost){};
	};

	bool search( const vector<vector<unsigned int> > &map);
	bool search( const vector<vector<unsigned int> > &map,
				 const Point<unsigned int> &start,
				 const Point<unsigned int> &target);

	void printGradientOnMap(const vector<vector<unsigned int> > &map);
private:
	void generateRoute();
	unsigned int minCost(const vector<vector<unsigned int> > &map,
	   						const Point<unsigned int> &p,
							Point<unsigned int> &move);

};

}// End of namespace SearchAlgorithms

#endif /* RRT_H_ */
