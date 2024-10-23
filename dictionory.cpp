#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

template<typename K, typename V>
class Dictionary {
private:
    vector<pair<K, V>> items;

public:

    void add(K key, V value) {
        items.push_back(make_pair(key, value));
    }

    V getValue(K key) {
        for (const auto& item : items) {
            if (item.first == key) {
                return item.second;
            }
        }
        throw invalid_argument("Key not found!");
    }

    // Overload the << operator to print the dictionary
    friend ostream& operator<<(ostream& os, const Dictionary& dict) {
        for (const auto& item : dict.items) {
            os << item.first << " => " << item.second << endl;
        }
        return os;
    }
};

int main() {
  
    Dictionary<string, string> mapObj;


    mapObj.add("blr", "Bengaluru");
    mapObj.add("chn", "Chennai");
    mapObj.add("hyd", "Hyderabad");

    cout << "Value for 'blr': " << mapObj.getValue("blr") << endl;

    // Print the entire dictionary using the overloaded << operator
    cout << mapObj;

    return 0;
}
