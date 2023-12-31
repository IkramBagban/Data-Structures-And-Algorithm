#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Create an unordered_map named 'mapping' with string keys and int values
    unordered_map<string, int> mapping;

    // Insertion using various methods
    mapping.insert(make_pair("love", 25));
    mapping["hello"] = 1;
    mapping.insert({"world", 100});
    mapping.emplace("coding", 50);

    // Access and modify elements
    cout << "Value associated with 'world': " << mapping["world"] << endl;
    mapping["world"] = 101; // Update the value for the key 'world'

    // Check presence of a key
    if (mapping.count("hello") > 0) {
        cout << "'hello' is in the map." << endl;
    }

    // Size of the map
    cout << "Size of the map: " << mapping.size() << endl;

    // Iterating over the map
    cout << "Contents of the map:" << endl;
    for (auto p : mapping) {
        cout << p.first << " has value " << p.second << endl;
    }

    // Erase elements
    mapping.erase("coding"); // Erase by key
    cout << "Size of the map after erasing 'coding': " << mapping.size() << endl;

    // Accessing a non-existing key will create it
    cout << "Accessing a non-existing key 'new_key':" << endl;
    cout << "Value is " << mapping["new_key"] << endl; // This will insert 'new_key' with a default int value of 0

    // Find an element
    auto search = mapping.find("hello");
    if (search != mapping.end()) {
        cout << "Found 'hello' with value " << search->second << endl;
    } else {
        cout << "'hello' not found in the map." << endl;
    }

    // Clear the map
    mapping.clear();
    cout << "The map is " << (mapping.empty() ? "empty" : "not empty") << " after clear." << endl;

    return 0;
}
