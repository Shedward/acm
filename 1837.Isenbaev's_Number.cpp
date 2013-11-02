
 // Problem: 1837. Isenbaev's Number
 // Url: http://acm.timus.ru/problem.aspx?space=1&num=1837
 // Author: Shed (86286AA)
 // Language: g++11 (G++ 4.7.2 with C++11)
 // Tests: 1837.Isenbaev's_Number.tests

#include <iostream>
#include <set>
#include <map>
#include <string>

struct Node {
	std::set<Node*> friends;
	int val = -1;
};

std::map<std::string, Node*> nodes;

Node* add(const std::string &name){
	if (nodes.count(name)){
		return nodes[name];
	} else {
		Node* n = new Node;
		nodes[name] = n;
		return n;
	}
}

void connect(Node *a, Node *b){
	a->friends.insert(b);
	b->friends.insert(a);
}

void evalDistance(Node *a, unsigned int val = 0){
	if (a->val < 0 or a->val > val){
		a->val = val;
		for (Node *f : a->friends){
			evalDistance(f, val+1);
		}
	}
}

int main()
{
	int n;
	Node *nm[3];
	std::string tmp;
	std::cin >> n;

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			std::cin >> tmp;
			nm[j] = add(tmp);
		}

		connect(nm[0], nm[1]);
		connect(nm[1], nm[2]);
		connect(nm[2], nm[0]);
	}

	if (nodes.count("Isenbaev")){
		evalDistance(nodes["Isenbaev"], 0);
	}


	for (const auto &p : nodes){
		std::cout << p.first << ' ';
		if (p.second->val >= 0){
			std::cout << p.second->val << std::endl;
		} else {
			std::cout << "undefined" << std::endl;
		}

	}
	return 0;
}

