#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>

void main_page() {
	//system("cls");
	printf("\033c\e[3J");
	int ch = 0;
	
  	while (ch != 4) {
  		printf("\t   +-----------------------------------------------+\n");
		printf("\t   |           LIBRARY MANAGEMENT SYSTEM           |\n");
		printf("\t   +-----------------------------------------------+\n");
		printf("\t		      1. Admin \n");
	    	printf("\t                      2. Librarian \n");
	    	printf("\t                      3. Exit \n");
	    	
	    	printf("Enter Choice...");
	    	scanf("%d",&ch);
	    	
	    	switch (ch) {
	    		case 1 : printf("\033c\e[3J");
				 //system("cls");
	    			 page_admin();
	    			 break;	
	    				 
	    		case 2 : printf("\033c\e[3J");
	    			 //system("cls");
	    			 page_libn();
	    			 break;
	    				 
	    		case 3 : exit(1);
	    		
	    		default : printf("Invalid Choice...\n\n");		 
    		}
	}
}

void page_admin() {
	int ch = 0;
	
	while (1) {
		printf("\t   +-----------------------------------------------+\n");
		printf("\t   |           LIBRARY MANAGEMENT SYSTEM           |\n");
		printf("\t   +-----------------------------------------------+\n");
		printf("\t		  1. Add a User \n");
		printf("\t		  2. Delete a User \n");
		printf("\t		  3. Modify User Details \n");
		printf("\t		  4. Show all Users \n");
		printf("\t		  5. List of Books Available \n");
		printf("\t		  6. Change Password \n");
		printf("\t		  7. Logout \n\n");
		
		printf("Enter Choice...");
		scanf("%d",&ch);
		
		switch (ch) {
			case 1 : add_libn();			//adding a librarian
					 break;
			case 2 : del_libn();			//deleting a librarian
					 break;
			case 3 : mod_libn();			//modify a librarian details
					 break;
			case 4 : ls_libn();			//list of librarians
					 break;
			case 5 : ls_books();			//list of books
					 break;
			case 6 : ch_psw();			//change password
					 break;
			case 7 : main_page();
			default : printf("Invalid Choice...\n\n");
		}
	}
}

void page_libn() {
	int ch = 0;
	
	while (1) {
		printf("\t   +-----------------------------------------------+\n");
		printf("\t   |           LIBRARY MANAGEMENT SYSTEM           |\n");
		printf("\t   +-----------------------------------------------+\n");
		
		printf("\t1. Add New Book                  8. Delete an Existing Member \n");
		printf("\t2. Search for a Book 		 9. Show all Members \n");
		printf("\t3. Delete a Book 		10. Issue a Book \n");
		printf("\t4. List of Books Available	11. Return a Book \n");
		printf("\t5. Add a Member			12. Show all Issued Books \n");
		printf("\t6. Search for a Member		13. Change Password \n");
		printf("\t7. Modify Member Details	14. Logout \n\n");
		
		
		
		printf("Enter Choice...");
    	scanf("%d",&ch);
    	
		switch (ch) {
			case 1  : add_book();			//adding a book
					 break;
			case 2  : srch_book();			//searching for a book
					 break;
			case 3  : del_book();			//deleting a book
					 break;
			case 4  : ls_books();			//list of books
					 break;
			case 5  : add_mmbr();			//add members
					 break;
			case 6  : srch_mmbr();			//search for a member
					 break;
			case 7  : mod_mmbr();			//modify member details
					 break;
			case 8  : del_mmbr();			//delete a member
					 break;
			case 9  : ls_mmbr();			//list of members
					 break;
			case 10 : issue_book();			//isse a book to a member
					 break;
			case 11 : retn_book();			//take the book back
					 break;
			case 12 : ls_issuedBooks();		//list of issued books
					 break;
			case 13 : ch_psw();			//change password
					 break;
			case 14 : main_page();
			default : printf("Invalid Choice...\n\n");
		}
	}
}


void add_libn() {

}

void del_libn() {

}

void mod_libn() {

}

void ls_libn() {

}

void ls_books() {

}

void ch_psw() {

}

void add_book() {

}

void srch_book() {

}

void del_book() {

}

void add_mmbr() {

}

void srch_mmbr() {

}

void mod_mmbr() {

}

void del_mmbr() {

}

void ls_mmbr() {

}

void issue_book() {

}

void retn_book() {

}

void ls_issuedBooks() {

}



int main() {
	main_page();
	
	return 0;
}
