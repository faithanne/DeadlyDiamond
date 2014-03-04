import java.util.Set;
import java.util.Map.Entry;

// Dictionary is derived from AbstractDictionary
public class Dictionary extends AbstractDictionary implements DictionaryInterface{

	// Create an empty dictionary
	public Dictionary() {

	}

	// Subclass print() overrides the superclass Map's print()
	@Override
	public void print() {

		System.out.println(nameCode + " : Values");

		// Place map entries in a set. Sets are unordered.
		Set<Entry<String, String>> entries = super.map.entrySet();

		// Use iterator to print the set
		for (Entry<String, String> entry : entries)
			System.out.println(entry.getKey() + " : " + entry.getValue());
	}
}