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

    public static boolean search(Node root, int key) { // O(height)

        if (root == null) {
            return false;
        }

        if (root.data == key) {
            return true;
        }
        
        if (root.data > key) {
            // left subtree
            return search(root.left, key);
        } else {
            // right subtree
            return search(root.right, key);
        }
    }

    public static Node delete(Node root, int val) {

        if (root.data > val) {
            root.left = delete(root.left, val);
        } else if (root.data < val) {
            root.right = delete(root.right, val);
        }

        else { // root.data == val
            // case 1
            if (root.left == null && root.right == null) {
                return null;
            }

            // case 2
            if (root.left == null) {
                return root.right;
            }
            else if (root.right == null) {
                return root.left;
            }

            // case 3
            Node IS = inOrderSuccessor(root.right);
            root.data = IS.data;
            root.right = delete(root.right, IS.data);
        }

        return root;
    }

    public static Node inOrderSuccessor(Node root) {
        while (root.left != null) {
            root = root.left;
        }

        return root;
    }

    public static void printInRange(Node root, int X, int Y) {

        if (root == null) {
            return;
        }

        if (root.data >= X && root.data <= Y) {
            printInRange(root.left, X, Y);
            System.out.print(root.data + " ");
            printInRange(root.right, X, Y);
        }
        else if (root.data >= Y) {
            printInRange(root.left, X, Y);
        }
        else {
            printInRange(root.right, X, Y);
        }
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

        int values[] = {8, 5, 3, 1, 4, 6, 10, 11, 14};
        Node root = null;

        for (int i = 0; i < values.length; i++) {
            root = insert(root, values[i]);
        }

        inorder(root);
        System.out.println();

        boolean result = search(root, 6);
        System.out.println(result);

        delete(root, 10);
        inorder(root);

        System.out.println();
        printInRange(root, 6, 10);
	}
}