// GasStation.cpp
class Solution {
public:
	int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
		int start = 0;
		int n = gas.size();
		int net = 0;
		int total_gas = 0, total_cost = 0;
		for (int i = 0 ; i < n ; i++) {
			net += gas[i];
			net -= cost[i];
			total_gas += gas[i];
			total_cost += cost[i];
			if (net < 0) {
				start = i + 1;
				net = 0;
			}
		}
		if (total_gas - total_cost < 0) {
			return -1;
		}
		return start;
	}
};