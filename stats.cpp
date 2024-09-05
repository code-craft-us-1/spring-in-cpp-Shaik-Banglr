#include "stats.h"
#include <algorithm>
#include <numeric> 
#include <cmath>
using namespace Statistics;

Stats Statistics::ComputeStatistics(const std::vector<float>& v ) 
{
 Stats obj { 0.0f, 0.0f, 0.0f };
 
 if (!v.empty())
 {
	 float sum = static_cast<float>(std::accumulate(v.begin(), v.end(), 0.0));
	 obj.average = sum / v.size();
	 obj.max = *std::max_element(v.begin(), v.end());
	 obj.min = *std::min_element(v.begin(), v.end());
 }
return obj;
}
