class EncapsulateCollection{
}
class Foo{
	private int[] _collection;
	
	public int[] getCollection(){
		return _collection.clone();
	}
	
	public void removeItem(int i){
		_collection.remove(i);
	}
	
	public void addItem(int i){
		_collection.add(i);
	}
}