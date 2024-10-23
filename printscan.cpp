#include <iostream>
#include <string>

using namespace std;

class Printer {
private:
    string assetId;
    string model;
    
public:
    // Constructor
    Printer(string assetIdArg = "", string modelArg = "") 
        : assetId{assetIdArg}, model{modelArg} {
        cout << "Printer instantiated" << endl;
    }

    // Print function
    void print(string content) {
        cout << "Printing info: " << content << endl;
    }

    // Destructor
    ~Printer() {
        cout << "Printer destructor" << endl;
    }

    // Overload the '<<' operator for Printer output
    friend ostream& operator<<(ostream& os, const Printer& p) {
        os << "Printer [Asset ID: " << p.assetId << ", Model: " << p.model << "]";
        return os;
    }

    // Overload the '>>' operator for Printer input
    friend istream& operator>>(istream& is, Printer& p) {
        cout << "Enter Printer Asset ID: ";
        is >> p.assetId;
        cout << "Enter Printer Model: ";
        is >> p.model;
        return is;
    }
};

class Scanner {
private:
    string assetId;
    string model;
    
public:
    // Constructor
    Scanner(string assetIdArg = "", string modelArg = "") 
        : assetId{assetIdArg}, model{modelArg} {
        cout << "Scanner instantiated" << endl;
    }

    // Scan function
    void scan(string content) {
        cout << "Scanning info: " << content << endl;
    }

    // Destructor
    ~Scanner() {
        cout << "Scanner destructor" << endl;
    }

    // Overload the '<<' operator for Scanner output
    friend ostream& operator<<(ostream& os, const Scanner& s) {
        os << "Scanner [Asset ID: " << s.assetId << ", Model: " << s.model << "]";
        return os;
    }

    // Overload the '>>' operator for Scanner input
    friend istream& operator>>(istream& is, Scanner& s) {
        cout << "Enter Scanner Asset ID: ";
        is >> s.assetId;
        cout << "Enter Scanner Model: ";
        is >> s.model;
        return is;
    }
};

int main() {
    // Create Printer and Scanner objects
    Printer printerObj;
    Scanner scannerObj;

    // Input Printer and Scanner details using the overloaded '>>' operator
    cin >> printerObj;
    cin >> scannerObj;

    // Output the Printer and Scanner details using the overloaded '<<' operator
    cout << printerObj << endl;
    cout << scannerObj << endl;

    // Perform printing and scanning tasks
    printerObj.print("doc1.txt");
    scannerObj.scan("doc2.txt");

    return 0;
}
