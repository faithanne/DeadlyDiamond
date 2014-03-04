import java.util.Set;
import java.util.Map.Entry;

public class AssociativeMemory extends AbstractDictionary {

	static String valCode = "Phone Numbers";

	// Create an empty AssociativeMemory
	public AssociativeMemory() {

	}

	// Returns the key, given a value
	public String getKey(String val) {

		// Iterate through entries
		for (Entry<String, String> entry : super.map.entrySet()) {

			// If value is found, return key
			if (val.equals(entry.getValue()))
				return entry.getKey();
		}

		// If for loop ends without finding value, return error message
		return "Value not found";
	}

	public boolean isVal(String val) {
		// Iterate through entries
		for (Entry<String, String> entry : super.map.entrySet()) {

			// If value is found, return true
			if (val.equals(entry.getValue()))
				return true;
		}

		// If for loop ends without finding value, return false
		return false;
	}

	// Subclass print() overrides the superclass Map's print()
	@Override
	public void print() {

		System.out.println("Keys : " + valCode);

		// Place map entries in a set. Sets are unordered.
		Set<Entry<String, String>> entries = super.map.entrySet();

		// Use iterator to print the set
		for (Entry<String, String> entry : entries)
			System.out.println(entry.getKey() + " : " + entry.getValue());
	}

}