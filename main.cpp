
#include <iostream>

using namespace std;

int main(int argc, char **argv)

{
	vector <int> vector1 {};
	vector <int> vector2 {};
	
	cout << "add two integers to vector 1" << endl;  //10,20
	
	int insert_1 {0};
	int insert_2 {0};
	
	cin >> insert_1;
	cin >> insert_2;
	
	vector1.push_back(insert_1);
	vector1.push_back(insert_2);
	
	cout << "updated vector 1" << endl;	
	cout << vector1.at(0) << endl;	
	cout << vector1.at(1) << endl;	
	cout << "updated vector 1 has a size of " << vector1.size() << endl;	
	

	cout << "add two integers to vector 2" << endl;//100,200
	
	int insert_3 {0};
	int insert_4 {0};
	
	cin >> insert_3;
	cin >> insert_4;
	
	vector2.push_back(insert_3);
	vector2.push_back(insert_4);
	
	cout << "updated vector 2" << endl;	
	cout << vector2.at(0) << endl;	
	cout << vector2.at(1) << endl;	
	cout << "updated vector 2 has a size of " << vector2.size() << endl;	


	vector <vector<int>> vector_2d {};
	
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	cout << "updated vector2d" << endl;	
	cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) << endl;	
	cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) << endl;
	

	return 0;
}
