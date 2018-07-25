/*
    The important observation in this implementation is that this problem can be
    solved with a greedy algorithm, i.e. sweep the array from left to right and 
    reduce a round inmediately when it is found. The rest is just implementation
    details. I found LinkedList to be the easiest way to remove elements once they
    have been found.
    This algorithm is O(n) in time and O(n) in memory for an input array of size n
 */

class ListNode<T> {
  value: T;
  prev: ListNode<T>;
  next: ListNode<T>;
  
  constructor(value: T = null) {
      this.value = value;
      this.prev = null;
      this.next = null;
  }
}

class List<T> {
  beg: ListNode<T>;
  end: ListNode<T>;
  
  constructor() {
      this.beg = new ListNode<T>();
      this.end = new ListNode<T>();
      this.beg.next = this.end;
      this.end.prev = this.beg;
  }
  
  add(value: T) {
      let newNode = new ListNode<T>(value);
      this.insetBetween(newNode, this.end.prev, this.end);
  }
  
  insetBetween(newNode, prev, next) {
      prev.next = newNode;
      newNode.prev = prev;
      newNode.next = next;
      next.prev = newNode;
  }
  
  remove(node: ListNode<T>) {
      let { prev, next } = node;
      prev.next = next;
      next.prev = prev;
  }
  
  third() {
      return this.beg.next.next.next;
  }
  
  static isARound(node) {
      return node.value === node.prev.value 
          && node.value === node.prev.prev.value;
  }
  
  static arrayToList(array: number[]): List<number> {
      let list = new List<number>();
      array.forEach(v => list.add(v));
      return list;
  }
}

let brothersInTheBar = (G: number[]): number => {
  if(G.length < 3)
      return 0;
    
  let R = 0;
  let list = List.arrayToList(G);
    
  for(let head = list.third(), next; head !== list.end; head = next) {
      next = head.next;
      if(List.isARound(head)) {
          next = head.next;
          list.remove(head.prev.prev);
          list.remove(head.prev);
          list.remove(head);
          R++;
      }
  }
  
  return R;
}