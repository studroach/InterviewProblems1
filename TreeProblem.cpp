
class treeNode {
    treeNode* left, right;
    int data;

public:
    void printLeavesHeight3To5(int depth) {//first call depth = 0
        if(depth > 5) {
            return;
        }

        if(this.left != NULL) {
            this.left.printLeavesHeight3To5(depth + 1);
        }

        if(depth > 2) {
            cout << this.data;
        }

        if(this.right != NULL) {
            this.right.printLeavesHeight3To5(depth + 1);
        }
    }
}

//root.printLeavesHeight3To5(0);
