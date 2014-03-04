/*-----------------------------------------------------------------------------
 * Author:		Faith-Anne Kocadag
 * Written:		2/14/2013
 * 
 * An example of multiple and repeated inheritance patterns from C++ adapted
 * for Java through the use of Interfaces and Abstract classes. 
 ----------------------------------------------------------------------------*/

public class TestProject1 {

	public static void main(String[] args) {

		String s;

		Map myMap = new Map();
		for (int i = 0; i < 5; i++) {		// Fill myMap
			s = Character.toString((char) (i + 65));
			myMap.insert(s, generateNumber());
		}

		Dictionary myDictionary = new Dictionary();
		for (int i = 0; i < 5; i++) {		// Fill myDictionary
			s = Character.toString((char) (i + 65));
			myDictionary.insert(s, generateNumber());
		}

		AssociativeMemory myMemory = new AssociativeMemory();
		for (int i = 0; i < 5; i++) {		// Fill myMemory
			s = Character.toString((char) (i + 65));
			myMemory.insert(s, generateNumber());
		}

		ContactList myContacts = new ContactList();
		for (int i = 0; i < 5; i++) {		// Fill myContacts
			s = Character.toString((char) (i + 65));
			myContacts.insert(s, generateNumber());
		}
		
		Map[] array = new Map[4];			// Create array of base type Map
		array[0] = myMap;
		array[1] = myDictionary;
		array[2] = myMemory;
		array[3] = myContacts;

		for (int i = 0; i < 4; i++) {
			array[i].print();				// Polymorphic print() calls
			System.out.println();
		}
	}

	/* Generate random phone numbers to fill Maps */
	public static String generateNumber() {
		long number1 = (long) (Math.random() * 9000000000L) + 1000000000;
		return Long.toString(number1);
	}
}