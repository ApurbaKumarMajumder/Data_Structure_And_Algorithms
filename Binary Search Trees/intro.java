public class intro
{
    static class Node {

        int data;
        Node left;
        Node right;

        Node (int data) {
            this.data = data;
        }
    }

    public static Node insert(Node root, int val) {

        if (root == null) {
            root = new Node(val);
            return root;
        }

        if (root.data > val) {
            // left subtree
            root.left = insert(root.left, val);
        }
        else {
            // right subtree
            root.right = insert(root.right, val);
        }

        return root;
    }

    public static void inorder(Node root) {

        if (root == null) {
            return;
        }

        inorder(root.left);
        System.out.print(root.data + " ");
        inorder(root.right);
    }

	public static void main(String[] args) {
		
        // What is a BST
            // * Binary Tree
        
            // a. Left Subtree Nodes < Root
            // b. Right Subtree Nodes > Root
            // c. Left & Right Subtrees are also BST with no duplicates.

        // Special Property: Inorder Traversal of BST gives a sorted sequence.

        // Strategy: Most problems will be solved using recursion i.e. by dividing into subproblems & making recursive calls on subtrees.

        // Build a BST

        int values[] = {5, 1, 3, 4, 2, 7};
        Node root = null;

        for (int i = 0; i < values.length; i++) {
            root = insert(root, values[i]);
        }

        inorder(root);
        System.out.println();
	}
}