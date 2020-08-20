#include <iostream>
#include <vector>

using namespace std;

main(){
	vector<int> data = {10, 20, 30};

	//for(auto i:data)
	//	cout << i << '\n';
	for(int i = 0; i < data.size(); i++)
		cout << data[i] << '\n';

	for(int i = 4; i <= 10; i++)
		data.push_back(i*10);

	while(!data.empty()){  //empty() 是否為空
		int n = data.back();  //back: last one, front: farst one.
		data.pop_back();
		cout << n << '\n';
	}

	data.clear(); // 清空
	cout << "clear data" << '\n';

	vector<int> v(10); //len = 10; 初始值都 = 0
	vector<int> v2(10,5); //初始值都 = 5
	vector<int> v3(v); //也可 v3 = v1
	vector<int> v4(v2.begin() + 2, v2.end()); // v2[2]~[n-1]

	vector<int> vv[100];
	vv[0].push_back(10);
	cout << vv[0][0];
}
