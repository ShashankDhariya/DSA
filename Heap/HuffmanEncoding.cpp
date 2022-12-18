#include <bits/stdc++.h>
using namespace std;

struct Node{
    int freq;
    int data;
    Node* left;
    Node* right;

    Node(int x, char y): freq(x), data(y), left(NULL), right(NULL){};
};

struct comp{
    bool operator()(Node* a, Node* b){
        return a->freq > b->freq;
    }
};

void display(Node* node, string str){
    if(!node)
        return;

    if(node->data != '@')
        cout<<(char)node->data<<": "<<str<<endl;

    display(node->left, str + '0');
    display(node->right, str + '1');
}

void huffman(vector<int> freq, vector<char> data){
    priority_queue<Node*, vector<Node*>, comp>pq;

    for(int i=0;i<data.size();i++){
        Node* t = new Node(freq[i], data[i]);
        pq.push(t);
    }

    while(pq.size() != 1){
        Node* l = pq.top();
        pq.pop();

        Node* r = pq.top();
        pq.pop();

        Node* temp = new Node(l->freq + r->freq, '@');
        temp->left = l;
        temp->right = r;
        pq.push(temp);
    }

    Node* node = pq.top();
    display(node, "");
}

int main()
{
    int n;
    cout<<"Enter number of characters in the string: ";
    cin>>n;

    vector<char> data(n);
    vector<int> freq(n);

    cout<<"Enter characters: ";
    for(auto &num: data)
        cin>>num;

    cout<<"Enter their frequencies: ";
    for(auto &num: freq)
        cin>>num;

    huffman(freq, data);
    return 0;
}
