
#include <stdint.h>
#ifndef SLIST_H_INCLUDED
#define SLIST_H_INCLUDED


typedef struct _node_ Node;
struct _node_{
	int32_t data;
	Node *next;
};

//Structure for head and tail
typedef struct _slist_ Slist;
struct _slist_{
	Node *head;                                
	Node *tail;                               
	uint32_t length;                         
};

Slist slist_new();                       
//uint returns 0 or 1
uint8_t slist_lookup(const Slist *list,int32_t key);  
uint32_t slist_length(const Slist *list);
Slist*  slist_addnode_head(Slist *list,int32_t val);
Slist* slist_addnode_tail(Slist *list,int32_t val);
int32_t slist_min(Slist *list);
int32_t slist_max(Slist *list);
Slist* slist_reverse(Slist *list);
Slist* slist_deletenode_head(Slist *list); 
Slist* slist_deletenode_tail(Slist *list);
Slist* slist_deletenode_any(Slist *list,int32_t val);
int32_t slist_same(Slist *list1,Slist *list2);
Slist* slist_union(Slist *list1,Slist *list2);
Slist* slist_inter(Slist *list1,Slist *list2);
#endif

