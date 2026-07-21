/* Q3. Let us work on the menu of a library. Create a structure containing book information 
 like accession number, name of author, book title and flag to know whether a book is 
 issued or not. 
Create a menu in which the following can be done. 
1 - Display book information 
2 - Add a new book 
3 - Display all the books in the library of a particular author 
4 - Display the number of books of a particular title 
5 - Display the total number of books in the library 
6 - Issue a book 
(If we issue a book, then its number gets decreased by 1 and if we add a book, its number 
gets increased by 1) */
#include <iostream> 
#include <string> 
using namespace std;
struct book{
    int accessionNo;
    string author;
    string title;
    bool isissued;
};

book library[100];
int totalbooks=0;

void DisplayBook(){
    if(totalbooks==0){
        cout<<"No Books in Library \n";
        return;
    }
    int acc;
    cout<<"Enter Accession Number :";
    cin>>acc;
    for(int i=0;i<totalbooks;i++){
        if(library[i].accessionNo==acc){
            cout<<"Accession NO is : "<<library[i].accessionNo<<endl;
            cout<<"Author Name  is : "<<library[i].author<<endl;
            cout<<"Booj title is : "<<library[i].title<<endl;
            cout<<"status : "<<(library[i].isissued ? "issued":"Avilable")<<endl;
            return;
        }
        
    }
    cout<<"Book not found "<<endl;
}

void AddBook(){
    if(totalbooks==100){
        cout<<"Library is Full"<<endl;
        return;
    }
    book newbook;
    cout<<"Enter the accession NUmber : "<<endl;
    cin>>newbook.accessionNo;
    cin.ignore();
    cout<<"Enter Author Name : "<<endl;
    cin>>newbook.author;
    cout<<"Booj title is : ";
    cin>>newbook.title;
    newbook.isissued=false;
    library[totalbooks]=newbook;
    totalbooks++;
    cout<<"Book add successfully..."<<endl;
}

void DisplayByAuthor(){
    if(totalbooks==0){
        cout<<"No BOOK is avilable in the library yet"<<endl;
        return;
    }
    string authorname;
    cin.ignore();
    cout<<"Enter The Author name to search for : "<<endl;
    getline(cin,authorname);
    bool found=false;
    for(int i=0;i<totalbooks;i++){
        if(library[i].author==authorname){
            cout<<"Accession NO is : "<<library[i].accessionNo<<endl;
            cout<<"Author Name  is : "<<library[i].author<<endl;
            cout<<"Booj title is : "<<library[i].title<<endl;
            cout<<"status : "<<(library[i].isissued ? "issued":"Avilable")<<endl;
            found=true;
        }
    }
    
    if(!found){
        cout<<"Book Not found of this Author"<<endl;
    }
    return;
}

void CountByTitle(){
    int count=0;
    string titlename;
    cout<<"Enter the title to search for : ";
    cin.ignore();
    getline(cin,titlename);
    for(int i=0; i<totalbooks;i++){
        if( library[i].title==titlename) count++;
    }
    cout<<"The total number of books of the given title is : "<<count<<endl;


}

void DisplayTotalBooks(){
    cout<<"The total number of books in the library is : "<<totalbooks<<endl;
    return;
}

void IssueBook(){
    if(totalbooks==0){
        cout<<"no book is avialable in the library : "<<endl;
        return;
    }
    int acc;
    cout<<"enter accession NUmber To Issuse A Book  : ";
    cin>>acc;
    bool found=false;
    for(int i= 0;i<totalbooks;i++){
        if(library[i].accessionNo==acc){
            library[i].isissued=true;
            found=true;
        }
        if(found) break;
    }
    if(!found){
        cout<<"book Not Found"<<endl;
    }

}


int main(){
    
    int choice ;
    do{
        cout<<"************library MENU*************"<<endl;
        cout<<"1 - Display book information"<<endl;
        cout<<"2 - Add a new book"<<endl;
        cout<<"3 - display all the books in library of specific Author"<<endl;
        cout<<"4 - Display the number of books of particular Title"<<endl;
        cout<<"5 - Display the total number of books in the library"<<endl;
        cout<<"6 - Issue a book"<<endl;
        cout<<"Enter the choice of your desire :";
        cin>>choice;

        switch(choice){
            case 1: DisplayBook(); break;
            case 2: AddBook(); break;
            case 3: DisplayByAuthor(); break;
            case 4: CountByTitle(); break;
            case 5: DisplayTotalBooks(); break;
            case 6: IssueBook(); break;
            case 0: cout<<"Exiting..."<<endl; break;
            default: cout<<"Invalid choice, try again."<<endl;
        }
    }
    while(choice!=0);

}