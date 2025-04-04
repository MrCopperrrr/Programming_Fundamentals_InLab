#include <iostream>
using namespace std;
struct node
{
  int data;
  node *next;
};
node *createLinkedList(int n)
{
  node *head = nullptr;
  node *temp = nullptr;
  node *p = nullptr;
  for (int i = 0; i < n; i++)
  {
    temp = new node;
    cin >> temp->data;
    temp->next = nullptr;
    if (head == nullptr)
    {
      head = temp;
    }
    else
    {
      p = head;
      while (p->next != nullptr)
      {
        p = p->next;
      }
      p->next = temp;
    }
  }
  return head;
}
void print(node *head)
{
  while (head != nullptr)
  {
    cout << head->data << endl;
    head = head->next;
  }
}
int main()
{
  int n = 0;
  cin >> n;
  if (n > 0)
  {
    node *head = createLinkedList(n);
    print(head);
  }
  else
  {
    cout << "Invalid n" << endl;
  }
  return 0;
}
