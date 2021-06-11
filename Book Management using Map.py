# Book Management using Map in Python

bookdict = {}

def insert(id, name, price, author):
    bookdict[bid] = [bname, price, author]

def delete(id):
    del bookdict[id]
    
def search(bid):
    for i in bookdict.keys():
        if i == id:
            return bookdict[i]

def list_all():
    for i in bookdict.keys():
        print(bookdict[i])
    
task=1
while(task!=0):
    print("==========>>>** Book Management System **<<========== ");
    print("\n1. Add a book");
    print("2. Delete a book");
    print("3. Search a book by it's id");
    print("4. List of all the books");
    print("5. Exit");

    task=int(input("\nEnter your choice : "));
    
    if task == 1:
        temp = input("Enter ID, Name, Book Price, Author: ").split()
        insert(int(temp[0]), temp[1], int(temp[2]), temp[3])
    if task == 2:
        temp = int(input("Enter id to Delete: "))
        delete(temp)
    if task == 3:
        temp = int(input("Enter id to Search: "))
        print(search(temp))
    if task == 4:
        list_all()