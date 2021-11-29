public class IntList implements MyList{
	protected IntList next;
	protected int data;
	
	public IntList(IntList n ,int d) {
		this.next = n;
		this.data = d;
	}
	
	
	public int getData() {
		return data;
	}
	
	public IntList next() {
		return this.next;
	}
	
	public void printNode() {
		System.out.printf("intList Node, data is: %d",data);
	}
	
}