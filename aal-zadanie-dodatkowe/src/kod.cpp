#include <iostream>
#include <vector>

int detHierarchy(const int & actualPos, const std::vector<int> & squadIn, std::vector<int> * squadOut)
{
	if (squadOut -> at(actualPos) != -1) return (squadOut -> at(actualPos));

	else if (actualPos == squadIn.at(actualPos))
	{
		squadOut -> at(actualPos) = 0;
		return 0;
	}

	else 
	{
		squadOut -> at(actualPos) = 1 + detHierarchy(squadIn.at(actualPos), squadIn, squadOut);
		return (squadOut -> at(actualPos));
	}
}

int main()
{
	int quantity, soldier;
	std::vector< std::vector<int> > squadIn, squadOut;
	std::vector<int> tempVecP1;
	std::vector<int> * tempVecP2;

	// reading input

	while (1)
	{
		std::cin >> quantity;

		if (!quantity)
		{
			break;
		}

		for (int i = 0; i < quantity; i++)
		{
			std::cin >> soldier;
			tempVecP1.push_back(soldier);
		}

		squadIn.push_back(tempVecP1);
		tempVecP1.clear();
	}

	// processing data

	for (const auto & it : squadIn)
	{
		tempVecP2 = new std::vector<int>(it.size(), -1);

		for (unsigned int i = 0; i < (tempVecP2 -> size()); i++)
		{
			if ((tempVecP2 -> at(i)) != -1) continue;

			else detHierarchy(i, it, tempVecP2);
		}

		squadOut.push_back(*tempVecP2);
		delete tempVecP2;
	}

	// writing output

	for (const auto & it : squadOut)
	{
		for (const auto & it2 : it)
		{
			std::cout << it2 << " ";
		}

		std::cout << std::endl;
	}

	return 0;
}