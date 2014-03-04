import java.util.Map.Entry;
import java.util.Set;

// ContactList extends AssociativeMemory
public class ContactList extends AssociativeMemory implements DictionaryInterface {

	protected boolean lock;

	// Default Constructor
	public ContactList() {
		lock = false;
	}

	// Sets lock to true
	public void setLock() {
		lock = true;
	}

	// Sets lock to false
	public void unsetLock() {
		lock = false;
	}

	// Prints the contents of the ContactList
	@Override
	public void print() {
		System.out.println(nameCode + " : " + valCode + " : Lock Status ("
				+ lock + ")");

		// Place map entries in a set. Sets are unordered.
		Set<Entry<String, String>> entries = super.map.entrySet();

		// Use iterator to print the set
		for (Entry<String, String> entry : entries)
			System.out.println(entry.getKey() + " : " + entry.getValue());
	}
}