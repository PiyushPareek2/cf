struct Node{
public:
    Node* a[26]={NULL};
    bool flag=false;
    bool containsCh(char ch){
        return a[ch-'a']!=NULL;
    }
    void put(char ch){
        a[ch-'a']=new Node;
    }
    Node* get(char ch){
        return a[ch-'a'];
    }
    void set(){
        flag=true;
    }
    bool istrue(){
        return flag;
    }
};
class Trie {
public:
    Node* root;
    Trie() {
        root=new Node;
    }
    
    void insert(string word) {
        Node* temp=root;
        for(int i=0;i<word.size();i++){
            if(!temp->containsCh(word[i])){
                temp->put(word[i]);
            }
            temp=temp->get(word[i]);
        }   
        temp->set();     
    }
    
    bool search(string word) {
        Node* temp=root;
        for(int i=0;i<word.size();i++){
            if(!temp->containsCh(word[i]))return false;
            temp=temp->get(word[i]);
        }
        return temp->istrue();
    }
    
    bool startsWith(string word) {
         Node* temp=root;
        for(int i=0;i<word.size();i++){
            if(!temp->containsCh(word[i]))return false;
            temp=temp->get(word[i]);
        }
        return true;
    }
};

//for binary trie
struct Node{
public:
    Node* a[2]={NULL};
    bool containsCh(int c){
        return a[c]!=NULL;
    }
    void put(int c){
        a[c]=new Node;
    }
    Node* get( int c){
        return a[c];
    }
    
};
class Trie {
public:
    Node* root;
    Trie() {
        root=new Node;
    }
    
    void insert(int n) {
        Node* temp=root;
        for(int i=31;i>=0;i--){
            int cur=(n>>i & 1);
            if(!temp->containsCh(cur)){
                temp->put(cur);
            }
            temp=temp->get(cur);
        }   
        return ;   
    }
    
     int  evaluate(int n) {
        Node* temp=root;
        
        int ans=0;
        for(int i=31;i>=0;i--){
            int a= n>>i & 1;
            int cur=1;
            if(a)cur=0;
            if(temp->containsCh(cur)){
                temp=temp->get(cur);
                ans+=1<<i;
            }
            else{
                temp=temp->get(a);
            }
        }
        return ans;
    }
    
   
    
};

