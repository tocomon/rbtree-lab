#include "rbtree.h"

#include <stdlib.h> // malloc, calloc, free

/** Node colour black */
#define	BLACK	0
/** Node colour red */
#define	RED	1

node_t nil ={
  BLACK,
  NULL,
  NULL,
  NULL,
  NULL
};

static void rbtree_rotate_left(rbtree *rbtree, node_t *node);
static void rbtree_rotate_right(rbtree *rbtree, node_t *node);
static void rbtree_insert_fixup(rbtree *rbtree, node_t *node);
static void rbtree_delete_fixup(rbtree *rbtree, node_t *child, node_t *child_parent);


rbtree *new_rbtree(void) {
  rbtree *p = (rbtree *)calloc(1, sizeof(rbtree));
  if (!p) {
    return NULL;
  }
  
  p->root = NULL;
  p->nil = &nil;

  return p;
}

void delete_node(node_t *now_node, node_t *nil_node){
  if (now_node != nil_node) { // NULL이 아닌 경우
    delete_node(now_node->left, nil_node); // 왼쪽 서브트리 순회
    delete_node(now_node->right, nil_node); // 오른쪽 서브트리 순회
    free(now_node); // 노드 메모리 해제
  }
}

void delete_rbtree(rbtree *t) {
  delete_node(t->root, t->nil); // 노드 순회 및 메모리 해제
  free(t->nil); // sentinel 메모리 해제
  free(t); // rbtree 구조체 메모리 해제
}

node_t *rbtree_insert(rbtree *t, const key_t key) {
  // TODO: implement insert
  return t->root;
}

node_t *rbtree_find(const rbtree *t, const key_t key) {
  // TODO: implement find
  return t->root;
}

node_t *rbtree_min(const rbtree *t) {
  // TODO: implement find
  return t->root;
}

node_t *rbtree_max(const rbtree *t) {
  // TODO: implement find
  return t->root;
}

int rbtree_erase(rbtree *t, node_t *p) {
  // TODO: implement erase
  return 0;
}

int rbtree_to_array(const rbtree *t, key_t *arr, const size_t n) {
  // TODO: implement to_array
  return 0;
}
