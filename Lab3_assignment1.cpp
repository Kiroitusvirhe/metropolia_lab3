#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;
    string author = "Peter";
    
protected:
    float price;
    
public:
    string publisher;
    
    // Public getter and setter for title
    void setTitle(string newTitle) {
        title = newTitle;
    }
    
    string getTitle() {
        return title;
    }
    
    void displayAuthorInfo() {
        cout << "Author: " << author << endl;
    }
};

int main() {
    Book myBook;
    
    // A. Setting and printing title using public methods
    myBook.setTitle("The Great Gatsby");
    cout << "Title: " << myBook.getTitle() << endl;
    
    // B. Setting and printing publisher (public member)
    myBook.publisher = "Charles Scribner's Sons";
    cout << "Publisher: " << myBook.publisher << endl;
    
    // C. Calling displayAuthorInfo()
    myBook.displayAuthorInfo();
    
    return 0;
}