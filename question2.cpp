#include<iostream>
using namespace std;
class Node{
    public:
      int data;
      Node* next;
      Node(){
        data=0;
        next=nullptr;
      }Node(int data){
        this->data=data;
        next=nullptr;
      }
};
class linkedList{
    private:
      Node *head;
    public:
      linkedList(){
        head=nullptr;
      }void push_back(int value){
        if(head==nullptr){
            head=new Node(value);
        }else{
            Node *temp=head;
            while(temp->next !=nullptr){
                temp=temp->next;
            }
            temp->next=new Node(value);
        }
      }
      float average(){
        int count=0,sum=0;
        Node *temp=head;
        while(temp!=nullptr){
            count++;
            sum+=temp->data;
            temp=temp->next;
        }
        float av=sum/float(count);
        return av;
      }
      void display(){
        Node* temp=head;
        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;

      }
};
int main(){
    linkedList l1;
    l1.push_back(6);
    l1.push_back(7);
    l1.push_back(8);
    l1.push_back(9);
    l1.display();
    cout<<"Average: "<<l1.average()<<endl;
    return 0;
}