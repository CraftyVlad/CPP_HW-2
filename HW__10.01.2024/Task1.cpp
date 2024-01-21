#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Book {
	string title;
	string author;
	string publisher;
	string genre;
};

void editBook(Book& book) {
	cout << "Enter new title: ";
	getline(cin, book.title);
	cout << "Enter new author: ";
	getline(cin, book.author);
	cout << "Enter new publisher: ";
	getline(cin, book.publisher);
	cout << "Enter new genre: ";
	getline(cin, book.genre);
}

void printBooks(Book books[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Title: " << books[i].title << endl;
		cout << "Author: " << books[i].author << endl;
		cout << "Publisher: " << books[i].publisher << endl;
		cout << "Genre: " << books[i].genre << endl;
		cout << endl;
	}
}

void searchByAuthor(Book books[], int size, string author) {
	bool found = false;
	for (int i = 0; i < size; i++) {
		if (books[i].author == author) {
			cout << "Title: " << books[i].title << endl;
			cout << "Author: " << books[i].author << endl;
			cout << "Publisher: " << books[i].publisher << endl;
			cout << "Genre: " << books[i].genre << endl;
			cout << endl;
			found = true;
		}
	}
	if (!found) {
		cout << "No books found by author \\" << author << endl;
	}
}

void searchByTitle(Book books[], int size, string title) {
	bool found = false;
	for (int i = 0; i < size; i++) {
		if (books[i].title == title) {
			cout << "Title: " << books[i].title << endl;
			cout << "Author: " << books[i].author << endl;
			cout << "Publisher: " << books[i].publisher << endl;
			cout << "Genre: " << books[i].genre << endl;
			cout << endl;
			found = true;
		}
	}
	if (!found) {
		cout << "No books found with title" << title << "" << endl;
	}
}

bool compareTitle(Book book1, Book book2) {
	return book1.title < book2.title;
}

bool compareAuthor(Book book1, Book book2) {
	return book1.author < book2.author;
}

bool comparePublisher(Book book1, Book book2) {
	return book1.publisher < book2.publisher;
}

int main() {
    const int NUM_BOOKS = 3;
    Book books[NUM_BOOKS] = {
        "The Great Gatsby", "F. Scott Fitzgerald", "Scribner", "Novel",
        "To Kill a Mockingbird", "Harper Lee", "J. B. Lippincott & Co.", "Novel",
        "1984", "George Orwell", "Secker & Warburg", "Dystopian Fiction"
    };

    int choice;
    cout << "// Choices //" << endl;
    cout << "1. Edit a book" << endl;
    cout << "2. Print all books" << endl;
    cout << "3. Search by author" << endl;
    cout << "4. Search by title" << endl;
    cout << "5. Sort by title" << endl;
    cout << "6. Sort by author" << endl;
    cout << "7. Sort by publisher" << endl;
    cout << "8. Exit" << endl << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        int index;
        cout << "Enter index of book to edit (0-" << NUM_BOOKS - 1 << "): ";
        cin >> index;
        cin.ignore();
        if (index >= 0 && index < NUM_BOOKS) {
            cout << "Editing book #" << index << endl;
            editBook(books[index]);
        }
        else {
            cout << "Invalid index" << endl;
        }
        break;
    case 2:
        printBooks(books, NUM_BOOKS);
        break;
    case 3: {
        string newauthor;
        cout << "Enter author name: ";
        cin.ignore();
        getline(cin, newauthor);
        searchByAuthor(books, NUM_BOOKS, newauthor);
        break;
    }
    case 4: {
        string newtitle;
        cout << "Enter title: ";
        cin.ignore();
        getline(cin, newtitle);
        searchByTitle(books, NUM_BOOKS, newtitle);
        break;
    }
    case 5:
        sort(books, books + NUM_BOOKS, compareTitle);
        cout << "Sorted by title" << endl;
        break;
    case 6:
        sort(books, books + NUM_BOOKS, compareAuthor);
        cout << "Sorted by author" << endl;
        break;
    case 7:
        sort(books, books + NUM_BOOKS, comparePublisher);
        cout << "Sorted by publisher" << endl;
        break;
    case 8:
        cout << "Exiting program" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }

    cin.ignore();
    cout << endl;
    while (choice != 8);

    return 0;
}