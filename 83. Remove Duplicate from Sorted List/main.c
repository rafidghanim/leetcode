#include <stdio.h>
#include <stdlib.h>

struct ListNode { 
	int val; 
	struct ListNode *next;
 };

void add_data(struct ListNode ** head,int va){
	struct ListNode *add = (struct ListNode *)malloc(sizeof(struct ListNode));
	add->val = va;
	add->next = *head;
	*head = add;
	
}
void print(struct ListNode *head){
	struct ListNode *ptr = head;
	while (ptr!=NULL){
		printf("%d ",ptr->val);
		ptr = ptr->next;
	}
}


struct ListNode * deleteDuplicates(struct ListNode * head) {
    struct ListNode *temp = head;

    while (temp != NULL && temp->next != NULL) {
        if (temp->val == temp->next->val) {
            // hapus duplicate
            struct ListNode *del = temp->next;
            temp->next = del->next;
            free(del);
        } else {
            temp = temp->next;
        }
    }

    return head;
}


int main(){
	struct ListNode *heker = NULL;
	add_data(&heker,4);
        add_data(&heker,3);
        add_data(&heker,2);
        add_data(&heker,1);
        add_data(&heker,1);
	deleteDuplicates(heker);
	print(heker);
}
