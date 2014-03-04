// AbstractDictionary extends map.
// It is a base class for Dictionary and AssociativeMemory
public class AbstractDictionary extends Map {

	// Returns a value given a key
	public String getVal(String key) {
		return super.map.get(key);
	}
}