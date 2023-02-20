#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;
    int option;

    while (true) {
        cout << "1. Create array of n int elements\n";
        cout << "2. Display of array elements with suitable headings\n";
        cout << "3. Insert an element at a given valid position\n";
        cout << "4. Deleting an element at a given valid position\n";
        cout << "5. Exit\n\n";
        cout << "Enter a number to choose from option.... ";
        cin >> option;

        switch (option) {
            case 1:
                // Creating an array of N Integer Elements
                int size;
                cout << "Enter size of array: ";
                cin >> size;

                if (size <= 0) {
                    cout << "Invalid size, please enter a positive number" << endl;
                    break;
                }

                cout << "Enter elements of the array: " << endl;

                for (int i = 0; i < size; i++) {
                    int value;
                    cin >> value;
                    arr.push_back(value);
                }

                cout << "Array created successfully" << endl;
                break;

            case 2:
                // Display of Array Elements with Suitable Headings
                if (arr.empty()) {
                    cout << "Array is empty, please create an array first" << endl;
                    break;
                }

                cout << "Index\tValue" << endl;
                for (int i = 0; i < arr.size(); i++) {
                    cout << i << "\t" << arr[i] << endl;
                }

                cout << "Array printed successfully" << endl;
                break;

            case 3:
                // Insert an element at a given valid position
                if (arr.empty()) {
                    cout << "Array is empty, please create an array first" << endl;
                    break;
                }

                int pos, value;
                cout << "Enter index at which value is to be inserted: ";
                cin >> pos;

                if (pos < 0 || pos > arr.size()) {
                    cout << "Invalid index" << endl;
                    break;
                }

                cout << "Enter value to insert: ";
                cin >> value;
                arr.insert(arr.begin() + pos, value);

                cout << "Element inserted successfully" << endl;
                break;

            case 4:
                // Deleting an element at a given valid position
                if (arr.empty()) {
                    cout << "Array is empty, please create an array first" << endl;
                    break;
                }

                cout << "Enter index of element to delete: ";
                cin >> pos;

                if (pos < 0 || pos >= arr.size()) {
                    cout << "Invalid index" << endl;
                    break;
                }

                arr.erase(arr.begin() + pos);

                cout << "Element deleted successfully" << endl;
                break;

            case 5:
                // Exit
                cout << "Exiting program..." << endl;
                return 0;

            default:
                cout << "Invalid option chosen, please try again" << endl;
                break;
        }
    }

    return 0;
}