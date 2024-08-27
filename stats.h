#include <vector>

namespace Statistics 
{
	struct Stats
	{
      float average;
	  float min;
	  float max;
	};

    // define the Stats structure here. See the tests to infer its properties
    
    Stats ComputeStatistics(const std::vector<float>& );
}
