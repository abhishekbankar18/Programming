// java DSA

import java.util.*;

class Program445
{
    public static void main(String Arg[])
    {
        SinglyLL obj = new SinglyLL();
    }
}

class Node
{
    public int Data;
    public Node Next;
}

class SinglyLL
{
    public Node Head;
    public int Count;

    public SinglyLL()
    {
        Head = null;
        Count = 0;
    }
}