class Node {
  constructor(val){
  this.val = val;
  this.prev = null;
  this.next = null;
  }
}

class DoublyLinkedList {
  constructor() {
    this.head = null;
    this.tail = null;
    this.length = 0;
  }

  push(val) {
    let node = new Node(val)
    if(!this.head){
    this.head = node;
    this.tails = node;
  } else {
    let temp = this.tail;
    this.tail = node;
    this.prev = temp;
    this.next = node;
  }
  this.length++;
  return this;
}
}

let list = new DoublyLinkedList;
list.push(23);
list.push(86);
list.push(4);
console.log(list);