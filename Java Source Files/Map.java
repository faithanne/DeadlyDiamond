import java.util.*;
import java.util.Map.Entry;

public class Map {

	// java.util.HashMap was used as a client for this Map class.
	// It is protected so that all subclasses can access it.
	protected HashMap<String, String> map;

	// Instantiate an empty Map
	public Map() {
		map = new HashMap<String, String>();
	}

	// Call on HashMap's put method to insert values
	public void insert(String key, String val) {
		map.put(key, val);
	}

	// Call on HashMap's remove method
	public void del(String key) {
		map.remove(key);
	}

	// Call on HashMap's containsKey method
	public boolean isMapped(String key) {
		return map.containsKey(key);
	}

	// Print the map
	public void print() {

		// Place map entries in a set. Sets are unordered.
		Set<Entry<String, String>> entries = map.entrySet();

		System.out.println("Keys : Values");
		// Use iterator to print the set
		for (Entry<String, String> entry : entries)
			System.out.println(entry.getKey() + " : " + entry.getValue());
	}
}