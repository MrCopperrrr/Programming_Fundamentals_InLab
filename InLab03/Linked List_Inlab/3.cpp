#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};

node *createLinkedList(int n); // The implementation is provided implicitly

void replace(node* head, int position, int value)
{
  if (position < 0)
    {
      return; // do nothing if position is negative
    }

    node* current = head;
    int count = 0;

    while (current != nullptr && count < position)
    {
      current = current->next;
      count++;
    }

    if (current != nullptr)
    {
      current->data = value; // replace the value at the given position
    }
}
void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << " ";
    head = head->next;
  }
  cout<<endl;
}
int main()
{
  int n = 0;
  cin >> n;
  node *head = createLinkedList(n);
  print(head);
  int pos, val;
  cin>>pos>>val;
  replace(head, pos, val);
  print(head);
  return 0;
}
