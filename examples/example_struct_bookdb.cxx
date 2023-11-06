#include <iostream>
#include <string>
#include <vector>

enum item_type {book, booklet, CD, DVD};

struct DB_Item
{
    int year;
    std::string title;
    std::string author;
    item_type type;
};

using DB = std::vector<DB_Item>; // use struct type in vector def

void list(DB const& db) { // const ref, args cannot be manipulated 
    using std::cout;
    for(auto& it : db) {
        // iterator from vector
        cout << "----------------------------\n";
        cout << " Title: " << it.title << "\n";
        cout << " Author: " << it.author << "\n";
        cout << " Year of publication: " << it.year << "\n";
        switch (it.type)
        {
            case book : cout << " Book\n"; break;
            case booklet : cout << " Booklet\n"; break;
            case CD : cout << " CD\n"; break;
            case DVD : cout << " DVD\n"; break;
        }
    }

}


int main() {
    DB my_db;
    my_db.push_back({
        2014, "Interstellar", "Christopher Nolan", DVD
    });
    my_db.push_back({
        1997, "Harry Potter and the Philosopher's stone", "J.K. Rowling", book
    });
    my_db.push_back({
        1978, "The Hitchhiker's Guide to the Galaxy", "Douglas Adams", booklet
    });
    my_db.push_back({
        2002, "A rush of blood to the head", "Coldplay", CD
    });
    list(my_db);
}