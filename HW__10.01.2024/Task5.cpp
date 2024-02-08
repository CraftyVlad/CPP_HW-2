//#include <iostream>
//#include <string>
//using namespace std;
//
//class Document {
//private:
//    string content;
//
//public:
//    Document(const string& content) : content(content) {}
//
//    friend class DocumentManager;
//};
//
//class DocumentManager {
//public:
//    void editDocument(Document& doc, const string& newContent) {
//        doc.content = newContent;
//    }
//
//    void saveDocument(const Document& doc) {
//        cout << "Document saved: " << doc.content << endl;
//    }
//};
//
//int main() {
//    Document myDocument("Hello, World!");
//
//    DocumentManager manager;
//    manager.editDocument(myDocument, "New content for the document");
//    manager.saveDocument(myDocument);
//
//    return 0;
//}
