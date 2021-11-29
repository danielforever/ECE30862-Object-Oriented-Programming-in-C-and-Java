public class LongList implements MyList{
	protected LongList next;
	protected long data;
	
	public LongList(LongList n, long d) {
		this.next = n;
		this.data = d;
	}
	
	public long getData() {
		return data;
	}
	
	public LongList next() {
		return this.next;
	}
	
	public void printNode() {
		System.out.printf("LongList Node, data is: %d",data);
	}
	
}