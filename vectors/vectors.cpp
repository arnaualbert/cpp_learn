#include <iostream>
#include <vector>

int main()
{

    std::vector<std::string> last_jedi;

    // Add characters here:

    last_jedi.push_back("kylo");
    last_jedi.push_back("rey");
    last_jedi.push_back("luke");
    last_jedi.push_back("finn");

    std::cout << last_jedi[0] << " ";
    std::cout << last_jedi[1] << " ";
    std::cout << last_jedi[2] << " ";
    std::cout << last_jedi[3] << " ";

    std::cout << "\n";
    std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};
    std::cout << grocery.size() << "\n";
    std::cout << "adding new items"
              << "\n";

    // Add more

    grocery.push_back("Artichoke");
    grocery.push_back("Eggs");

    std::cout << grocery.size() << "\n";

    std::vector<double> delivery_order;

    delivery_order.push_back(8.99);
    delivery_order.push_back(3.75);
    delivery_order.push_back(0.99);
    delivery_order.push_back(5.99);

    // Calculate the total using a for loop:

    double total = 0.0;

    for (int i = 0; i < delivery_order.size(); i++)
    {

        total = total + delivery_order[i];
    }

    std::cout << "Total: $" << total << "\n";
}