#ifndef _RBTREE_H_ // 중복 방지
#define _RBTREE_H_ // 매크로 정의

#include <stddef.h> // 데이터 유형

typedef enum { RBTREE_RED, RBTREE_BLACK } color_t; // RED=0 BLACK=1

typedef int key_t; // int 대신 key_t 사용

typedef struct node_t {
  color_t color; // 노드 색상
  key_t key; // 노드 키 int
  struct node_t *parent; // 부모 노드의 주소
  struct node_t *left; // 자식 노드의 주소
  struct node_t *right; // 자식 노드의 주소
} node_t; // struct node_t를 node_t로 사용할 수 있게함

typedef struct {
  node_t *root; // root 노드를 가리키는 포인터
  node_t *nil;  // for sentinel, 모든 leaf 노드는 sentinel 노드를 가리킴, sentinel 노드 = NULL
} rbtree;

rbtree *new_rbtree(void); // 동적 메모리 할당
void delete_rbtree(rbtree *); // 메모리 삭제
node_t *rbtree_insert(rbtree *, const key_t); // 노드 삽입
node_t *rbtree_find(const rbtree *, const key_t); // 해당 키 노드 주소, 없을 경우 NULL
node_t *rbtree_min(const rbtree *); // 최소값 노드 주소
node_t *rbtree_max(const rbtree *); // 최대값 노드 주소
int rbtree_erase(rbtree *, node_t *); // 노드 삭제
int rbtree_to_array(const rbtree *, key_t *, const size_t); // 노드 키 순서대로 배열

#endif  // _RBTREE_H_ 중복 방지
